#pragma once

enum NORMAL_ATTACK_STAGE
{
    NORMAL_ATTACK_STAGE_NONE = 0,
    NORMAL_ATTACK_STAGE_BEGIN,		// 开始普通攻击：使用者，目标类型
    NORMAL_ATTACK_STAGE_EFFECT,		// 造成效果：类型
    NORMAL_ATTACK_STAGE_BREAK,		// 打断：原因
    NORMAL_ATTACK_STAGE_FINISH,		// 结束：原因
    NORMAL_ATTACK_STAGE_MAX,		
};