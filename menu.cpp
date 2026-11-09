
#include "imgui.h"

void RenderMenu()
{
    static bool showMenu = true;
    static bool aimTrainer = false;
    static bool showFps = true;

    static float sensitivity = 50.0f;
    static float fov = 90.0f;

    if (!showMenu)
        return;

    ImGui::Begin("IOS GAMING MENU", &showMenu);

    if (ImGui::BeginTabBar("MainTabs"))
    {
        if (ImGui::BeginTabItem("General"))
        {
            ImGui::Checkbox("Aim Trainer", &aimTrainer);
            ImGui::Checkbox("Show FPS", &showFps);

            ImGui::SliderFloat(
                "Sensitivity", &sensitivity, 0.0f, 100.0f
            );

            ImGui::SliderFloat(
                "FOV", &fov, 30.0f, 120.0f
            );

            ImGui::EndTabItem();
        }

        if (ImGui::BeginTabItem("About"))
        {
            ImGui::Text("IOS Gaming Project");
            ImGui::Text("Version 1.0");
            ImGui::Text("Created with Dear ImGui");

            ImGui::EndTabItem();
        }

        ImGui::EndTabBar();
    }

    ImGui::End();
}
