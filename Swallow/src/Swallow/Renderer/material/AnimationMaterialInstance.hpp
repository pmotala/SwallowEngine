#pragma once

#include "MaterialInstance.hpp"

namespace Swallow {

    class AnimationMaterialInstance: public MaterialInstance
    {
        public:
            AnimationMaterialInstance(Ref<Shader> shader);
            AnimationMaterialInstance(AnimationMaterialInstance const &rhs);
            AnimationMaterialInstance &operator=(AnimationMaterialInstance const &rhs);
            ~AnimationMaterialInstance();

            virtual void Bind() override;
            virtual void Unbind() override;
            inline void SetColour(const glm::vec4 &colour) {m_Colour = colour;}
            inline void SetAnim(const glm::vec1 &anim) {u_Anim = anim;}

            inline glm::vec4 GetColour() const { return m_Colour; }
            inline glm::vec1 GetAnim() const { return u_Anim; }
        private:
            AnimationMaterialInstance();
            glm::vec4 m_Colour;
            glm::vec1 u_Anim;
    };
}