#include "Scene.h"

Scene::Scene()
{
    // creacio de la camera
    vec3 lookfrom(13, 2, 3);
    vec3 lookat(3,0,0);
    float dist_to_focus = 10.0;
    float aperture = 0.5;
    int pixelsX = 200;
    int pixelsY = 200;
    cam = new Camera(lookfrom, lookat, vec3(0,1,0), 20, pixelsX, pixelsY, aperture, dist_to_focus);

   // TODO: Cal crear els objectes de l'escena
    RandomScene();

    // TODO: Cal afegir llums a l'escena (Fase 2)
}

Scene::~Scene()
{
    for(unsigned int i = 0; i < objects.size(); ++i){
        if(objects[i]){
            if (dynamic_cast<Sphere*>(objects[i]))
                    delete (Sphere *)(objects[i]);
        }
    }
    delete cam;
}

// TODO: Metode que genera una escena random de numObjects de tipus esfera, a diferents posicions,
// amb diferents radis i diferents materials. S'usa drand48 per generar numeros random

void Scene::RandomScene() {

    objects.push_back(new Sphere(vec3(0, 0, -1), 0.5, new Lambertian(vec3(0.5, 0.2, 0.7))));


    objects.push_back(new Sphere(vec3(0,-1,-1), 0.5, new Lambertian(vec3(0.1, 0.2, 0.5))));
    objects.push_back(new Sphere(vec3(1,-1,-1), 0.5, new Lambertian(vec3(0.8, 0.6, 0.2))));
    objects.push_back(new Sphere(vec3(-1,-1,-1), 0.5, new Lambertian(vec3(0.6, 0.8, 0.2))));
    objects.push_back(new Sphere(vec3(-1,0,-1), -0.45, new Lambertian(vec3(0.2, 0.6, 0.8))));

//    objects.push_back(new BoundaryObject("../RayTracingBase/resources/peo1K.obj", new Lambertian(vec3(0.2, 0.6, 0.8))));

}

/*
** TODO: Metode que testeja la interseccio contra tots els objectes de l'escena (Fase 1)
**
** Si un objecte es intersecat pel raig, el parametre  de tipus IntersectInfo conte
** la informació sobre la interesccio.
** El metode retorna true si algun objecte es intersecat o false en cas contrari.
**
*/
bool Scene::hit(const Ray& raig, float t_min, float t_max, HitInfo& info) const
{
	HitInfo tmp;
	float t = t_max +1;
	bool h = false;

	// Tenir en compte amb el compilador.
	for(auto const&a: objects)
		if (a->hit (raig, t_min, t_max, tmp))
			if ((t_min <= tmp.t) and (tmp.t <= t_max))
			{
				h = true;
				if ( t < tmp.t )
				{
					info = tmp;
					t = info.t;
				}
			}
	info = tmp;
	return h;
	//return objects[0]->hit(raig, t_min, t_max, info);
    //return true;
    // TODO: Heu de codificar la vostra solucio per aquest metode substituint el 'return true'
    // Una possible solucio es cridar el mètode hit per a tots els objectes i quedar-se amb la interseccio
    // mes propera a l'observador, en el cas que n'hi hagi més d'una.
    // Cada vegada que s'intersecta un objecte s'ha d'actualitzar el HitInfo del raig,
    // pero no en aquesta funcio.

}

/*
** TODO: Funcio ComputeColor es la funcio recursiva del RayTracing.
** A modificar en la Fase 2 de l'enunciat per incloure Blinn-Phong  i ombres
** A modificar en la Fase 2 per a tractar reflexions
**
*/


vec3 Scene::ComputeColor (Ray &ray, int depth ) {

    vec3 color;
	HitInfo info;


    /* TODO: Canviar aquesta assignacio pel color basat amb la il.luminacio basada amb Phong-Blinn segons
     * el material de l'objecte i les llums per la fase 2 de la practica
     * En aquestesta fase 2,  cal fer que tambe es tinguin en compte els rebots de les reflexions.

       Inicialment s'ha posat la direccio del raig per tenir un color diferents per a cada pixel pero
       hitInfo ha d'anar tenint el color actualitzat segons els rebots.
    */
     //color = 0.5f*vec3(ray.direction.x+1, ray.direction.y+1, ray.direction.z+1);
     // rgb colors de [0, 1]
     // (-1, 1)
	 if ( hit (ray, 0, 1000, info) )
				//color = vec3 (1,0,0);
				color = info.normal;
	 else
		color = vec3 // Tinc en compte que el color va de [0,1] i la direcció [-1,1]
		(
				0.75f - 0.25f*ray.direction.y,	// -1 1, 1 0.5 ⇒ 1 - 0.25 (x+1) = 0.75 -0.25 x
				0.85f - 0.15f*ray.direction.y,	// -1 1, 1 0.7 ⇒ 1 - 0.15 (x+1) = 0.85 -0.15 x
				1
		);

	// Resposta d.)
	// Blavos amunt ⇒ ray.directon.y = 1 ⇒ (0.5, 0.7, 1)
	// Blanc aball ⇒ ray.direction.y =-1 ⇒ (1.0, 1.0, 1)
     return color;
}

