//
// Created by Murat on 2019/8/25.
//

#ifndef SANDBOX_EXAMPLE_LAYER_HPP
#define SANDBOX_EXAMPLE_LAYER_HPP

#include <Murat.hpp>
#include <memory>
#include <glm/glm/gtc/type_ptr.hpp>

namespace Sandbox {
    class ExampleLayer : public Murat::Layer {
    public:
        ExampleLayer();

        void onAttach() override {};

        void onDetach() override {};

        void onUpdate(Murat::TimeStep ts) override;

        void onImGuiRender() override;

        void onEvent(Murat::Event &event) override;

    private:
        Murat::Ref<Murat::Shader> m_Shader;
        Murat::Ref<Murat::VertexArray> m_VertexArray;

        Murat::Ref<Murat::Texture2D> m_LogoTexture;
        Murat::Ref<Murat::Texture2D> m_BackgroundTexture;

        glm::vec4 m_ClearColor = {0.9f, 0.7f, 0.5f, 0.1f};
        glm::vec4 m_BackgroundColor = {0.3f, 0.5f, 0.7f, 0.9f};
        glm::vec4 m_LogoColor = {1.0f, 1.0f, 1.0f, 1.0f};
        glm::mat4 m_Transform = glm::mat4(1.0f);
        Murat::Camera m_Camera = Murat::Camera({0.0f, 0.0f, 0.0f});
    };
}

#endif
