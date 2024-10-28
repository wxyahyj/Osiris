#pragma once

#include <tuple>

#include "ActiveWeaponAmmo/PlayerActiveWeaponAmmoPanel.h"
#include "ActiveWeaponIcon/PlayerActiveWeaponIconPanel.h"
#include "PlayerHealth/PlayerHealthPanel.h"
#include "PlayerPositionArrow/PlayerPositionArrowPanel.h"
#include "PlayerStateIcons/PlayerStateIconsPanel.h"

template <typename HookContext>
using PlayerInfoPanelTypes = std::tuple<
    PlayerPositionArrowPanel<HookContext>,
    PlayerHealthPanel<HookContext>,
    PlayerActiveWeaponIconPanel<HookContext>,
    PlayerActiveWeaponAmmoPanel<HookContext>,
    PlayerStateIconsPanel<HookContext>>;
