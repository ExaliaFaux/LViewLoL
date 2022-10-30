#include "Offsets.h"

Offsets::Offsets() {};

int Offsets::GameTime = 0x31260D8;//

int Offsets::ObjIndex = 0x8;//
int Offsets::ObjTeam = 0x34;//
int Offsets::ObjMissileName = 0x54;//
int Offsets::ObjNetworkID = 0xB4;//
int Offsets::ObjPos = 0x1DC;//
int Offsets::ObjMissileSpellCast = 0x250;//
int Offsets::ObjVisibility = 0x274;//
int Offsets::ObjSpawnCount = 0x288;//
int Offsets::ObjSrcIndex = 0x294;//
int Offsets::ObjMana = 0x029C;//
int Offsets::ObjMaxMana = 0x2AC;//
int Offsets::ObjRecallState = 0x0D90;//
int Offsets::ObjHealth = 0xE74;//
int Offsets::ObjMaxHealth = 0xE84;//
int Offsets::ObjAbilityHaste = 0x1690;//
int Offsets::ObjLethality = 0x128C;//
int Offsets::ObjArmor = 0x137C;//
int Offsets::ObjBonusArmor = 0x1380;//
int Offsets::ObjMagicRes = 0x1384;//
int Offsets::ObjBonusMagicRes = 0x1388;//
int Offsets::ObjBaseAtk = 0x1354;//
int Offsets::ObjBonusAtk = 0x12CC;//
int Offsets::ObjMoveSpeed = 0x1394;//
int Offsets::ObjSpellBook = 0x29B0;//
int Offsets::ObjTransformation = 0x3070;//
int Offsets::ObjName = 0x2D9C;//
int Offsets::ObjLvl = 0x3584;//
int Offsets::ObjExpiry = 0x298;//
int Offsets::ObjCrit = 0x1850;//
int Offsets::ObjCritMulti = 0x12B8;//
int Offsets::ObjAbilityPower = 0x1750;//
int Offsets::ObjAtkSpeedMulti = 0x1350;//
int Offsets::ObjAtkRange = 0x139C;//
int Offsets::ObjTargetable = 0xD04;//
int Offsets::ObjInvulnerable = 0x3D4;//
int Offsets::ObjIsMoving = 0x32E7;//
int Offsets::ObjDirection = 0x1AD0;//
int Offsets::ObjItemList = 0x35A8;//

int Offsets::ObjExpierience = 0x337C;//
int Offsets::ObjMagicPen = 0x1270;//
int Offsets::ObjMagicPenMulti = 0x1278;//
int Offsets::ObjAdditionalApMulti = 0x1248;//
int Offsets::ObjManaRegen = 0x11E0;//
int Offsets::ObjHealthRegen = 0x1390;//

int Offsets::ZoomClass = 0x31255AC;//
int Offsets::MaxZoom = 0x20;//

int Offsets::Chat = 0x312D968;//
int Offsets::ChatIsOpen = 0x6D8;//

int Offsets::SpellBookActiveSpellCast = 0x20;//
int Offsets::SpellBookSpellSlots = 0x478;//

int Offsets::ObjBuffManager = 0x2330;//
int Offsets::BuffManagerEntriesArray = 0x10;
int Offsets::BuffEntryBuff = 0x8;
int Offsets::BuffType = 0x4;
int Offsets::BuffEntryBuffStartTime = 0xC;
int Offsets::BuffEntryBuffEndTime = 0x10;
int Offsets::BuffEntryBuffCount = 0x74;
int Offsets::BuffEntryBuffCountAlt = 0x24;
int Offsets::BuffEntryBuffCountAlt2 = 0x28;//
int Offsets::BuffName = 0x4;//
int Offsets::BuffEntryBuffNodeStart = 0x20;
int Offsets::BuffEntryBuffNodeCurrent = 0x24;

int Offsets::ItemListItem = 0xC;
int Offsets::ItemInfo = 0x20;
int Offsets::ItemInfoId = 0x68;

int Offsets::CurrentDashSpeed = 0x1f8;//
int Offsets::IsDashing = 0x3c0;//
int Offsets::DashPos = 0x2EC;//
int Offsets::IsMoving = 0x1C0;//
int Offsets::NavBegin = 0x1cc;//
int Offsets::NavEnd = 0x224;//

int Offsets::ViewProjMatrices = 0x315A560;//
int Offsets::Renderer = 0x315FFAC;//
int Offsets::RendererWidth = 0x8;//
int Offsets::RendererHeight = 0x1C;//

int Offsets::SpellSlotLevel = 0x1C;//
int Offsets::SpellSlotTime = 0x24;//
int Offsets::SpellSlotCharges = 0x54;//
int Offsets::SpellSlotTimeCharge = 0x74;//
int Offsets::SpellSlotDamage = 0x94;//
int Offsets::SpellSlotSpellInfo = 0x120;//
int Offsets::SpellInfoSpellData = 0x40;//
int Offsets::SpellDataSpellName = 0x6C;//
int Offsets::SpellDataMissileName = 0x6C;//
int Offsets::SpellSlotSmiteTimer = 0x60;//
int Offsets::SpellSlotSmiteCharges = 0x54;//

int Offsets::ObjectManager = 0x188FD7C;//
int Offsets::LocalPlayer = 0x312D8CC;//
int Offsets::UnderMouseObject = 0x24EBC5C;//

int Offsets::ObjectMapCount = 0x2C;
int Offsets::ObjectMapRoot = 0x28;
int Offsets::ObjectMapNodeNetId = 0x10;
int Offsets::ObjectMapNodeObject = 0x14;

// int Offsets::MissileSpellInfo             = 0x0260;
// int Offsets::MissileSrcIdx                = 0x2C4;
// int Offsets::MissileDestIdx               = 0x314;
// int Offsets::MissileStartPos              = 0x02DC;
// int Offsets::MissileEndPos                = 0x02E8;

int Offsets::SpellCastSpellInfo = 0x8;
int Offsets::SpellCastStartTime = 0x41;//
int Offsets::SpellCastStartTimeAlt = 0x534;
int Offsets::SpellCastCastTime = 0x4C0;
int Offsets::SpellCastStart = 0x84;//
int Offsets::SpellCastEnd = 0x90;//
int Offsets::SpellCastSrcIdx = 0x68;
int Offsets::SpellCastDestIdx = 0xC0;

int Offsets::MissileSpellInfo = 0x0260;
int Offsets::MissileSrcIdx = 0x2C4;
int Offsets::MissileDestIdx = 0x314;
int Offsets::MissileStartPos = 0x02DC;
int Offsets::MissileEndPos = 0x02E8;

int Offsets::MinimapObject = 0x312611C;
int Offsets::MinimapObjectHud = 0x138;
int Offsets::MinimapHudPos = 0x3C;
int Offsets::MinimapHudSize = 0x44;

int Offsets::AiManagerStartPath = 0x1e4;
int Offsets::AiManagerEndPath = 0x1e8;
int Offsets::AiManagerTargetPosition = 0x10;
int Offsets::AiManagerIsMoving = 0x1c0;
int Offsets::AiManagerIsDashing = 0x3c0;
int Offsets::AiManagerCurrentSegment = 0x1c4;
int Offsets::AiManagerDashSpeed = 0x1f8;