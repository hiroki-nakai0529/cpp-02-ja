 #include "scene.hpp"
 
void Scene::add(Drawable* drawable){
    drawables.push_back(drawable);
}

void const Scene::render(){
    for(const auto drawable : drawables){
        drawable->draw();
    }
}
