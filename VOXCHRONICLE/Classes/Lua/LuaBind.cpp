/*
** Lua binding: VOXCHRONICLE
** Generated automatically by tolua++-1.0.92 on Mon Apr 29 18:43:08 2013.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_VOXCHRONICLE_open (lua_State* tolua_S);

#include "LuaCocos2d.h"
#include "Skill.h"
#include "Enemy.h"
#include "Species.h"
#include "Character.h"
#include "CharacterManager.h"
#include "EnemyManager.h"
#include "EnemySkill.h"
#include "MessageManager.h"
#include "EffectLayer.h"
#include "PopupWindow.h"
#include "IRegister.h"
#include "Controller.h"
#include "StatusLayer.h"
#include "EnemySkill.h"
#include "Map.h"
#include "SaveData.h"
#include "PlayLog.h"
#include "VQTime.h"
#include "SEManager.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"EnemySkill");
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"IRegister");
 tolua_usertype(tolua_S,"Skill");
 tolua_usertype(tolua_S,"Enemy");
 tolua_usertype(tolua_S,"Character");
 tolua_usertype(tolua_S,"VQTime");
 tolua_usertype(tolua_S,"MessageManager");
 tolua_usertype(tolua_S,"SaveData");
 tolua_usertype(tolua_S,"Species");
 tolua_usertype(tolua_S,"EffectLayer");
 tolua_usertype(tolua_S,"CCArray");
 tolua_usertype(tolua_S,"Map");
 tolua_usertype(tolua_S,"EnemyManager");
 tolua_usertype(tolua_S,"PlayLog");
 tolua_usertype(tolua_S,"SEManager");
 tolua_usertype(tolua_S,"CharacterManager");
 tolua_usertype(tolua_S,"CCSprite");
 tolua_usertype(tolua_S,"PopupWindow");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CCRect");
}

/* method: getPower of class  Skill */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Skill_getPower00
static int tolua_VOXCHRONICLE_Skill_getPower00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Skill",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Skill* self = (Skill*)  tolua_tousertype(tolua_S,1,0);
  CharacterManager* manager = ((CharacterManager*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPower'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPower(manager);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPower'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdentifier of class  Skill */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Skill_getIdentifier00
static int tolua_VOXCHRONICLE_Skill_getIdentifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Skill",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Skill* self = (Skill*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdentifier'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getIdentifier();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdentifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Skill */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Skill_getName00
static int tolua_VOXCHRONICLE_Skill_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Skill",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Skill* self = (Skill*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMP of class  Skill */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Skill_getMP00
static int tolua_VOXCHRONICLE_Skill_getMP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Skill",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Skill* self = (Skill*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdentifier of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getIdentifier00
static int tolua_VOXCHRONICLE_Enemy_getIdentifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdentifier'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getIdentifier();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdentifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRow of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getRow00
static int tolua_VOXCHRONICLE_Enemy_getRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRow'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRow();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCol of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getCol00
static int tolua_VOXCHRONICLE_Enemy_getCol00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCol'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCol();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCol'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHP of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getHP00
static int tolua_VOXCHRONICLE_Enemy_getHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttack of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getAttack00
static int tolua_VOXCHRONICLE_Enemy_getAttack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttack'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAttack();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxHP of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getMaxHP00
static int tolua_VOXCHRONICLE_Enemy_getMaxHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxHP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxHP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getType00
static int tolua_VOXCHRONICLE_Enemy_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'", NULL);
#endif
  {
   SkillType tolua_ret = (SkillType)  self->getType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getName00
static int tolua_VOXCHRONICLE_Enemy_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItem of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getItem00
static int tolua_VOXCHRONICLE_Enemy_getItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItem'", NULL);
#endif
  {
   EnemyItem tolua_ret = (EnemyItem)  self->getItem();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: moveRow of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_moveRow00
static int tolua_VOXCHRONICLE_Enemy_moveRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  float row = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveRow'", NULL);
#endif
  {
   self->moveRow(row);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRow of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setRow00
static int tolua_VOXCHRONICLE_Enemy_setRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  float row = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRow'", NULL);
#endif
  {
   self->setRow(row);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxHP of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setMaxHP00
static int tolua_VOXCHRONICLE_Enemy_setMaxHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  int hp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxHP'", NULL);
#endif
  {
   self->setMaxHP(hp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCol of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setCol00
static int tolua_VOXCHRONICLE_Enemy_setCol00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  int col = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCol'", NULL);
#endif
  {
   self->setCol(col);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCol'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationClip of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setAnimationClip00
static int tolua_VOXCHRONICLE_Enemy_setAnimationClip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  const char* clipName = ((const char*)  tolua_tostring(tolua_S,2,0));
  int frames = ((int)  tolua_tonumber(tolua_S,3,0));
  bool hasFrame = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationClip'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setAnimationClip(clipName,frames,hasFrame);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationClip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultAnimationClip of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setDefaultAnimationClip00
static int tolua_VOXCHRONICLE_Enemy_setDefaultAnimationClip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultAnimationClip'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->setDefaultAnimationClip();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultAnimationClip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCounter of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setCounter00
static int tolua_VOXCHRONICLE_Enemy_setCounter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  int counter = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCounter'", NULL);
#endif
  {
   self->setCounter(counter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCounter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHP of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setHP00
static int tolua_VOXCHRONICLE_Enemy_setHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  int hp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHP'", NULL);
#endif
  {
   self->setHP(hp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExp of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setExp00
static int tolua_VOXCHRONICLE_Enemy_setExp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  int exp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExp'", NULL);
#endif
  {
   self->setExp(exp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setItem of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setItem00
static int tolua_VOXCHRONICLE_Enemy_setItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  EnemyItem item = ((EnemyItem) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setItem'", NULL);
#endif
  {
   self->setItem(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkillType of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setSkillType00
static int tolua_VOXCHRONICLE_Enemy_setSkillType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  SkillType type = ((SkillType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkillType'", NULL);
#endif
  {
   self->setSkillType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkillType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttack of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setAttack00
static int tolua_VOXCHRONICLE_Enemy_setAttack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  int attack = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttack'", NULL);
#endif
  {
   self->setAttack(attack);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRegister of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getRegister00
static int tolua_VOXCHRONICLE_Enemy_getRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
  int defaultValue = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRegister'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRegister(key,defaultValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRegister of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_setRegister00
static int tolua_VOXCHRONICLE_Enemy_setRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
  int value = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRegister'", NULL);
#endif
  {
   self->setRegister(key,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasRegister of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_hasRegister00
static int tolua_VOXCHRONICLE_Enemy_hasRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasRegister'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasRegister(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpecies of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Enemy_getSpecies00
static int tolua_VOXCHRONICLE_Enemy_getSpecies00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpecies'", NULL);
#endif
  {
   Species* tolua_ret = (Species*)  self->getSpecies();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Species");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpecies'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __IRegister__ of class  Enemy */
#ifndef TOLUA_DISABLE_tolua_get_Enemy___IRegister__
static int tolua_get_Enemy___IRegister__(lua_State* tolua_S)
{
  Enemy* self = (Enemy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__IRegister__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<IRegister*>(self), "IRegister");
#else
   tolua_pushusertype(tolua_S,(void*)((IRegister*)self), "IRegister");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnableSkill of class  Species */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Species_isEnableSkill00
static int tolua_VOXCHRONICLE_Species_isEnableSkill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Species",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Skill",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Species* self = (Species*)  tolua_tousertype(tolua_S,1,0);
  Skill* skill = ((Skill*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnableSkill'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnableSkill(skill);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnableSkill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Character */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Character_getName00
static int tolua_VOXCHRONICLE_Character_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Character",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Character* self = (Character*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCharacterType of class  Character */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Character_getCharacterType00
static int tolua_VOXCHRONICLE_Character_getCharacterType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Character",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Character* self = (Character*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCharacterType'", NULL);
#endif
  {
   CharacterType tolua_ret = (CharacterType)  self->getCharacterType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCharacterType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getShield of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getShield00
static int tolua_VOXCHRONICLE_CharacterManager_getShield00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getShield'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getShield();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getShield'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setShield of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_setShield00
static int tolua_VOXCHRONICLE_CharacterManager_setShield00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  bool shield = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShield'", NULL);
#endif
  {
   self->setShield(shield);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShield'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeCharacter of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_changeCharacter00
static int tolua_VOXCHRONICLE_CharacterManager_changeCharacter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeCharacter'", NULL);
#endif
  {
   self->changeCharacter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeCharacter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTension of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_addTension00
static int tolua_VOXCHRONICLE_CharacterManager_addTension00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int tension = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTension'", NULL);
#endif
  {
   self->addTension(tension);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTension'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTension of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getTension00
static int tolua_VOXCHRONICLE_CharacterManager_getTension00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTension'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTension();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTension'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLevel of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getLevel00
static int tolua_VOXCHRONICLE_CharacterManager_getLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLevel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLevel of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_setLevel00
static int tolua_VOXCHRONICLE_CharacterManager_setLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int lv = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLevel'", NULL);
#endif
  {
   self->setLevel(lv);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addHP of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_addHP00
static int tolua_VOXCHRONICLE_CharacterManager_addHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int hp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addHP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->addHP(hp);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addMP of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_addMP00
static int tolua_VOXCHRONICLE_CharacterManager_addMP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int mp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addMP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->addMP(mp);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addMP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDrumLevel of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getDrumLevel00
static int tolua_VOXCHRONICLE_CharacterManager_getDrumLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDrumLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDrumLevel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDrumLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDrumLevel of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_setDrumLevel00
static int tolua_VOXCHRONICLE_CharacterManager_setDrumLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int lv = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDrumLevel'", NULL);
#endif
  {
   self->setDrumLevel(lv);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDrumLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: damage of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_damage00
static int tolua_VOXCHRONICLE_CharacterManager_damage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int d = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'damage'", NULL);
#endif
  {
   DamageType tolua_ret = (DamageType)  self->damage(d);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'damage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHP of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getHP00
static int tolua_VOXCHRONICLE_CharacterManager_getHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMP of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getMP00
static int tolua_VOXCHRONICLE_CharacterManager_getMP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxHP of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getMaxHP00
static int tolua_VOXCHRONICLE_CharacterManager_getMaxHP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxHP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxHP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxHP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxMP of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getMaxMP00
static int tolua_VOXCHRONICLE_CharacterManager_getMaxMP00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxMP'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxMP();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxMP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetTension of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_resetTension00
static int tolua_VOXCHRONICLE_CharacterManager_resetTension00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetTension'", NULL);
#endif
  {
   self->resetTension();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetTension'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentCharacter of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getCurrentCharacter00
static int tolua_VOXCHRONICLE_CharacterManager_getCurrentCharacter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentCharacter'", NULL);
#endif
  {
   Character* tolua_ret = (Character*)  self->getCurrentCharacter();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Character");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentCharacter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRepeatCount of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getRepeatCount00
static int tolua_VOXCHRONICLE_CharacterManager_getRepeatCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRepeatCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRepeatCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRepeatCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRepeatCount of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_setRepeatCount00
static int tolua_VOXCHRONICLE_CharacterManager_setRepeatCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int repeat = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRepeatCount'", NULL);
#endif
  {
   self->setRepeatCount(repeat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRepeatCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLastSkill of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getLastSkill00
static int tolua_VOXCHRONICLE_CharacterManager_getLastSkill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLastSkill'", NULL);
#endif
  {
   Skill* tolua_ret = (Skill*)  self->getLastSkill();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Skill");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLastSkill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExp of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getExp00
static int tolua_VOXCHRONICLE_CharacterManager_getExp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExp'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getExp();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExpWithLevel of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_getExpWithLevel00
static int tolua_VOXCHRONICLE_CharacterManager_getExpWithLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int level = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExpWithLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getExpWithLevel(level);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExpWithLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExp of class  CharacterManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_CharacterManager_setExp00
static int tolua_VOXCHRONICLE_CharacterManager_setExp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CharacterManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CharacterManager* self = (CharacterManager*)  tolua_tousertype(tolua_S,1,0);
  int exp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExp'", NULL);
#endif
  {
   self->setExp(exp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nextTurn of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_nextTurn00
static int tolua_VOXCHRONICLE_EnemyManager_nextTurn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CharacterManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
  CharacterManager* manager = ((CharacterManager*)  tolua_tousertype(tolua_S,2,0));
  bool moveOnly = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nextTurn'", NULL);
#endif
  {
   self->nextTurn(manager,moveOnly);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nextTurn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: popEnemyAt of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_popEnemyAt00
static int tolua_VOXCHRONICLE_EnemyManager_popEnemyAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
  const char* enemy = ((const char*)  tolua_tostring(tolua_S,2,0));
  float row = ((float)  tolua_tonumber(tolua_S,3,0));
  int col = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'popEnemyAt'", NULL);
#endif
  {
   Enemy* tolua_ret = (Enemy*)  self->popEnemyAt(enemy,row,col);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Enemy");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'popEnemyAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoss of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_getBoss00
static int tolua_VOXCHRONICLE_EnemyManager_getBoss00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoss'", NULL);
#endif
  {
   Enemy* tolua_ret = (Enemy*)  self->getBoss();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Enemy");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoss'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEnemies of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_getEnemies00
static int tolua_VOXCHRONICLE_EnemyManager_getEnemies00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEnemies'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getEnemies();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEnemies'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBoss of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_setBoss00
static int tolua_VOXCHRONICLE_EnemyManager_setBoss00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
  Enemy* enemy = ((Enemy*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBoss'", NULL);
#endif
  {
   self->setBoss(enemy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBoss'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadEnemyTextureAsync of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_loadEnemyTextureAsync00
static int tolua_VOXCHRONICLE_EnemyManager_loadEnemyTextureAsync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
  const char* enemyImageName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadEnemyTextureAsync'", NULL);
#endif
  {
   self->loadEnemyTextureAsync(enemyImageName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadEnemyTextureAsync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeEnemy of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_removeEnemy00
static int tolua_VOXCHRONICLE_EnemyManager_removeEnemy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Enemy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
  Enemy* enemy = ((Enemy*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeEnemy'", NULL);
#endif
  {
   self->removeEnemy(enemy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeEnemy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllNormalEnemies of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_removeAllNormalEnemies00
static int tolua_VOXCHRONICLE_EnemyManager_removeAllNormalEnemies00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllNormalEnemies'", NULL);
#endif
  {
   self->removeAllNormalEnemies();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllNormalEnemies'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllEnemies of class  EnemyManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemyManager_removeAllEnemies00
static int tolua_VOXCHRONICLE_EnemyManager_removeAllEnemies00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemyManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemyManager* self = (EnemyManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllEnemies'", NULL);
#endif
  {
   self->removeAllEnemies();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllEnemies'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedManager of class  MessageManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_MessageManager_sharedManager00
static int tolua_VOXCHRONICLE_MessageManager_sharedManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MessageManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MessageManager* tolua_ret = (MessageManager*)  MessageManager::sharedManager();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MessageManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushMessage of class  MessageManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_MessageManager_pushMessage00
static int tolua_VOXCHRONICLE_MessageManager_pushMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessageManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessageManager* self = (MessageManager*)  tolua_tousertype(tolua_S,1,0);
  const char* message = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushMessage'", NULL);
#endif
  {
   self->pushMessage(message);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushRandomMessageFromLua of class  MessageManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_MessageManager_pushRandomMessageFromLua00
static int tolua_VOXCHRONICLE_MessageManager_pushRandomMessageFromLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessageManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessageManager* self = (MessageManager*)  tolua_tousertype(tolua_S,1,0);
  const char* luaFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushRandomMessageFromLua'", NULL);
#endif
  {
   self->pushRandomMessageFromLua(luaFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushRandomMessageFromLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushRandomMessageFromFunction of class  MessageManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_MessageManager_pushRandomMessageFromFunction00
static int tolua_VOXCHRONICLE_MessageManager_pushRandomMessageFromFunction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MessageManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Map",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CharacterManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"EnemyManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MessageManager* self = (MessageManager*)  tolua_tousertype(tolua_S,1,0);
  const char* scriptName = ((const char*)  tolua_tostring(tolua_S,2,0));
  Map* map = ((Map*)  tolua_tousertype(tolua_S,3,0));
  CharacterManager* characterManager = ((CharacterManager*)  tolua_tousertype(tolua_S,4,0));
  EnemyManager* enemyManager = ((EnemyManager*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushRandomMessageFromFunction'", NULL);
#endif
  {
   self->pushRandomMessageFromFunction(scriptName,map,characterManager,enemyManager);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushRandomMessageFromFunction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedLayer of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_sharedLayer00
static int tolua_VOXCHRONICLE_EffectLayer_sharedLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   EffectLayer* tolua_ret = (EffectLayer*)  EffectLayer::sharedLayer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"EffectLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPopupWindow of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_addPopupWindow00
static int tolua_VOXCHRONICLE_EffectLayer_addPopupWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EffectLayer* self = (EffectLayer*)  tolua_tousertype(tolua_S,1,0);
  int pages = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPopupWindow'", NULL);
#endif
  {
   PopupWindow* tolua_ret = (PopupWindow*)  self->addPopupWindow(pages);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PopupWindow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPopupWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEffectOnEnemy of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_addEffectOnEnemy00
static int tolua_VOXCHRONICLE_EffectLayer_addEffectOnEnemy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Enemy",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EffectLayer* self = (EffectLayer*)  tolua_tousertype(tolua_S,1,0);
  Enemy* enemy = ((Enemy*)  tolua_tousertype(tolua_S,2,0));
  const char* prefix = ((const char*)  tolua_tostring(tolua_S,3,0));
  int frameCount = ((int)  tolua_tonumber(tolua_S,4,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEffectOnEnemy'", NULL);
#endif
  {
   self->addEffectOnEnemy(enemy,prefix,frameCount,rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEffectOnEnemy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addDamageLabel of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_addDamageLabel00
static int tolua_VOXCHRONICLE_EffectLayer_addDamageLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EffectLayer* self = (EffectLayer*)  tolua_tousertype(tolua_S,1,0);
  int damage = ((int)  tolua_tonumber(tolua_S,2,0));
  int offset = ((int)  tolua_tonumber(tolua_S,3,0));
  DamageLabelType type = ((DamageLabelType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addDamageLabel'", NULL);
#endif
  {
   self->addDamageLabel(damage,offset,type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addDamageLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addDamageLabelOnEnemy of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_addDamageLabelOnEnemy00
static int tolua_VOXCHRONICLE_EffectLayer_addDamageLabelOnEnemy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Enemy",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EffectLayer* self = (EffectLayer*)  tolua_tousertype(tolua_S,1,0);
  Enemy* target = ((Enemy*)  tolua_tousertype(tolua_S,2,0));
  int damage = ((int)  tolua_tonumber(tolua_S,3,0));
  DamageLabelType type = ((DamageLabelType) (int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addDamageLabelOnEnemy'", NULL);
#endif
  {
   self->addDamageLabelOnEnemy(target,damage,type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addDamageLabelOnEnemy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCutinExtension of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_setCutinExtension00
static int tolua_VOXCHRONICLE_EffectLayer_setCutinExtension00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EffectLayer* self = (EffectLayer*)  tolua_tousertype(tolua_S,1,0);
  CCNode* extension = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCutinExtension'", NULL);
#endif
  {
   self->setCutinExtension(extension);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCutinExtension'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPopupWindow of class  EffectLayer */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EffectLayer_getPopupWindow00
static int tolua_VOXCHRONICLE_EffectLayer_getPopupWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EffectLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EffectLayer* self = (EffectLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPopupWindow'", NULL);
#endif
  {
   PopupWindow* tolua_ret = (PopupWindow*)  self->getPopupWindow();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PopupWindow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPopupWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPage of class  PopupWindow */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_PopupWindow_getPage00
static int tolua_VOXCHRONICLE_PopupWindow_getPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PopupWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PopupWindow* self = (PopupWindow*)  tolua_tousertype(tolua_S,1,0);
  int page = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getPage(page);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  PopupWindow */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_PopupWindow_setText00
static int tolua_VOXCHRONICLE_PopupWindow_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PopupWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PopupWindow* self = (PopupWindow*)  tolua_tousertype(tolua_S,1,0);
  int page = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* headerText = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* message = ((const char*)  tolua_tostring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(page,headerText,message);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addImage of class  PopupWindow */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_PopupWindow_addImage00
static int tolua_VOXCHRONICLE_PopupWindow_addImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PopupWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PopupWindow* self = (PopupWindow*)  tolua_tousertype(tolua_S,1,0);
  int page = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addImage'", NULL);
#endif
  {
   self->addImage(page,filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addImage of class  PopupWindow */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_PopupWindow_addImage01
static int tolua_VOXCHRONICLE_PopupWindow_addImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PopupWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  PopupWindow* self = (PopupWindow*)  tolua_tousertype(tolua_S,1,0);
  int page = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,3,0));
  CCPoint point = *((CCPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addImage'", NULL);
#endif
  {
   self->addImage(page,filename,point);
  }
 }
 return 0;
tolua_lerror:
 return tolua_VOXCHRONICLE_PopupWindow_addImage00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRegister of class  IRegister */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_IRegister_getRegister00
static int tolua_VOXCHRONICLE_IRegister_getRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IRegister",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IRegister* self = (IRegister*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
  int defaultValue = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRegister'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRegister(key,defaultValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRegister of class  IRegister */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_IRegister_setRegister00
static int tolua_VOXCHRONICLE_IRegister_setRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IRegister",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IRegister* self = (IRegister*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
  int value = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRegister'", NULL);
#endif
  {
   self->setRegister(key,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasRegister of class  IRegister */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_IRegister_hasRegister00
static int tolua_VOXCHRONICLE_IRegister_hasRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IRegister",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IRegister* self = (IRegister*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasRegister'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasRegister(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBool of class  IRegister */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_IRegister_getBool00
static int tolua_VOXCHRONICLE_IRegister_getBool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IRegister",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IRegister* self = (IRegister*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBool'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getBool(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBool of class  IRegister */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_IRegister_setBool00
static int tolua_VOXCHRONICLE_IRegister_setBool00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IRegister",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IRegister* self = (IRegister*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool value = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBool'", NULL);
#endif
  {
   self->setBool(key,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBool'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearRegister of class  IRegister */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_IRegister_clearRegister00
static int tolua_VOXCHRONICLE_IRegister_clearRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IRegister",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IRegister* self = (IRegister*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearRegister'", NULL);
#endif
  {
   self->clearRegister();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  EnemySkill */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_EnemySkill_getName00
static int tolua_VOXCHRONICLE_EnemySkill_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"EnemySkill",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  EnemySkill* self = (EnemySkill*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxLevel of class  Map */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Map_getMaxLevel00
static int tolua_VOXCHRONICLE_Map_getMaxLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Map",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxLevel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInitialLevel of class  Map */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Map_getInitialLevel00
static int tolua_VOXCHRONICLE_Map_getInitialLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Map",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInitialLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getInitialLevel();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInitialLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Map */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Map_getName00
static int tolua_VOXCHRONICLE_Map_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Map",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdentifier of class  Map */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Map_getIdentifier00
static int tolua_VOXCHRONICLE_Map_getIdentifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Map",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdentifier'", NULL);
#endif
  {
   string tolua_ret = (string)  self->getIdentifier();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdentifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBossStage of class  Map */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Map_isBossStage00
static int tolua_VOXCHRONICLE_Map_isBossStage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Map",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBossStage'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBossStage();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBossStage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeBackgroundImage of class  Map */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_Map_changeBackgroundImage00
static int tolua_VOXCHRONICLE_Map_changeBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Map",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
  const char* imageName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeBackgroundImage'", NULL);
#endif
  {
   self->changeBackgroundImage(imageName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __IRegister__ of class  Map */
#ifndef TOLUA_DISABLE_tolua_get_Map___IRegister__
static int tolua_get_Map___IRegister__(lua_State* tolua_S)
{
  Map* self = (Map*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__IRegister__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<IRegister*>(self), "IRegister");
#else
   tolua_pushusertype(tolua_S,(void*)((IRegister*)self), "IRegister");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedData of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_sharedData00
static int tolua_VOXCHRONICLE_SaveData_sharedData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SaveData* tolua_ret = (SaveData*)  SaveData::sharedData();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SaveData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isUnlockAchievement of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_isUnlockAchievement00
static int tolua_VOXCHRONICLE_SaveData_isUnlockAchievement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  const char* identifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUnlockAchievement'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isUnlockAchievement(identifier);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUnlockAchievement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unlockAchievement of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_unlockAchievement00
static int tolua_VOXCHRONICLE_SaveData_unlockAchievement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  const char* identifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unlockAchievement'", NULL);
#endif
  {
   self->unlockAchievement(identifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unlockAchievement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDefeatedCount of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_getDefeatedCount00
static int tolua_VOXCHRONICLE_SaveData_getDefeatedCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  const char* enemyIdentifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDefeatedCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDefeatedCount(enemyIdentifier);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDefeatedCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addDefeatedCountForEnemy of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_addDefeatedCountForEnemy00
static int tolua_VOXCHRONICLE_SaveData_addDefeatedCountForEnemy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  const char* enemyIdentifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addDefeatedCountForEnemy'", NULL);
#endif
  {
   self->addDefeatedCountForEnemy(enemyIdentifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addDefeatedCountForEnemy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCountFor of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_addCountFor00
static int tolua_VOXCHRONICLE_SaveData_addCountFor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  SaveDataCountKey key = ((SaveDataCountKey) (int)  tolua_tonumber(tolua_S,2,0));
  int value = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCountFor'", NULL);
#endif
  {
   self->addCountFor(key,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCountFor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCountFor of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_addCountFor01
static int tolua_VOXCHRONICLE_SaveData_addCountFor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  SaveDataCountKey key = ((SaveDataCountKey) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCountFor'", NULL);
#endif
  {
   self->addCountFor(key);
  }
 }
 return 0;
tolua_lerror:
 return tolua_VOXCHRONICLE_SaveData_addCountFor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountFor of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_getCountFor00
static int tolua_VOXCHRONICLE_SaveData_getCountFor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  SaveDataCountKey key = ((SaveDataCountKey) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountFor'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCountFor(key);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountFor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClearedForMap of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_setClearedForMap00
static int tolua_VOXCHRONICLE_SaveData_setClearedForMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  const char* mapIdentifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClearedForMap'", NULL);
#endif
  {
   self->setClearedForMap(mapIdentifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClearedForMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClearedMap of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_isClearedMap00
static int tolua_VOXCHRONICLE_SaveData_isClearedMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
  const char* mapIdentifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClearedMap'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClearedMap(mapIdentifier);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClearedMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_save00
static int tolua_VOXCHRONICLE_SaveData_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'", NULL);
#endif
  {
   self->save();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_load00
static int tolua_VOXCHRONICLE_SaveData_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'", NULL);
#endif
  {
   self->load();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAllEnemyDictionaryCount of class  SaveData */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SaveData_getAllEnemyDictionaryCount00
static int tolua_VOXCHRONICLE_SaveData_getAllEnemyDictionaryCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SaveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SaveData* self = (SaveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAllEnemyDictionaryCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAllEnemyDictionaryCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAllEnemyDictionaryCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCount of class  PlayLog */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_PlayLog_getCount00
static int tolua_VOXCHRONICLE_PlayLog_getCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PlayLog",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PlayLog* self = (PlayLog*)  tolua_tousertype(tolua_S,1,0);
  int key = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCount(key);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedTime of class  VQTime */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_VQTime_sharedTime00
static int tolua_VOXCHRONICLE_VQTime_sharedTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"VQTime",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   VQTime* tolua_ret = (VQTime*)  VQTime::sharedTime();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"VQTime");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentHour of class  VQTime */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_VQTime_getCurrentHour00
static int tolua_VOXCHRONICLE_VQTime_getCurrentHour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"VQTime",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VQTime* self = (VQTime*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentHour'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCurrentHour();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentHour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedManager of class  SEManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SEManager_sharedManager00
static int tolua_VOXCHRONICLE_SEManager_sharedManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SEManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SEManager* tolua_ret = (SEManager*)  SEManager::sharedManager();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SEManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerEffect of class  SEManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SEManager_registerEffect00
static int tolua_VOXCHRONICLE_SEManager_registerEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SEManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SEManager* self = (SEManager*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerEffect'", NULL);
#endif
  {
   self->registerEffect(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerEffect of class  SEManager */
#ifndef TOLUA_DISABLE_tolua_VOXCHRONICLE_SEManager_registerEffect01
static int tolua_VOXCHRONICLE_SEManager_registerEffect01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SEManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SEManager* self = (SEManager*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  float delay = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerEffect'", NULL);
#endif
  {
   self->registerEffect(filename,delay);
  }
 }
 return 0;
tolua_lerror:
 return tolua_VOXCHRONICLE_SEManager_registerEffect00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_VOXCHRONICLE_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"MAX_ROW",MAX_ROW);
  tolua_constant(tolua_S,"SkillRangeSingle",SkillRangeSingle);
  tolua_constant(tolua_S,"SkillRangeAll",SkillRangeAll);
  tolua_constant(tolua_S,"SkillRangeHorizontal",SkillRangeHorizontal);
  tolua_constant(tolua_S,"SkillRangeVertical",SkillRangeVertical);
  tolua_constant(tolua_S,"SkillRangeBack",SkillRangeBack);
  tolua_constant(tolua_S,"SkillRangeSelf",SkillRangeSelf);
  tolua_constant(tolua_S,"SkillRangeFront",SkillRangeFront);
  tolua_constant(tolua_S,"SkillTypeNone",SkillTypeNone);
  tolua_constant(tolua_S,"SkillTypeNormal",SkillTypeNormal);
  tolua_constant(tolua_S,"SkillTypePhysical",SkillTypePhysical);
  tolua_constant(tolua_S,"SkillTypeMagical",SkillTypeMagical);
  tolua_constant(tolua_S,"CharacterTypeVox",CharacterTypeVox);
  tolua_constant(tolua_S,"CharacterTypeLaska",CharacterTypeLaska);
  tolua_constant(tolua_S,"EnemyItemNone",EnemyItemNone);
  tolua_constant(tolua_S,"EnemyItemShield",EnemyItemShield);
  tolua_constant(tolua_S,"EnemyItemBarrier",EnemyItemBarrier);
  tolua_constant(tolua_S,"MusicSetTypeWay",MusicSetTypeWay);
  tolua_constant(tolua_S,"MusicSetTypeBoss",MusicSetTypeBoss);
  tolua_constant(tolua_S,"MaxHPLabelTag",MaxHPLabelTag);
  tolua_constant(tolua_S,"CurrentHPLabelTag",CurrentHPLabelTag);
  tolua_constant(tolua_S,"LevelLabelTag",LevelLabelTag);
  tolua_constant(tolua_S,"LifeGaugeBackgroundTag",LifeGaugeBackgroundTag);
  tolua_constant(tolua_S,"LifeGaugeTag",LifeGaugeTag);
  tolua_constant(tolua_S,"MPMarkerTag",MPMarkerTag);
  tolua_constant(tolua_S,"ControllerFrameTypeNone",ControllerFrameTypeNone);
  tolua_constant(tolua_S,"ControllerFrameTypeCommon",ControllerFrameTypeCommon);
  tolua_constant(tolua_S,"ControllerFrameTypeFull",ControllerFrameTypeFull);
  tolua_constant(tolua_S,"EffectLayerCutinTypeNormal",EffectLayerCutinTypeNormal);
  tolua_constant(tolua_S,"EffectLayerCutinTypeFailure",EffectLayerCutinTypeFailure);
  tolua_constant(tolua_S,"EffectLayerCutinTypeHold",EffectLayerCutinTypeHold);
  tolua_constant(tolua_S,"EffectLayerCutinTypeCastOff",EffectLayerCutinTypeCastOff);
  tolua_constant(tolua_S,"PlayLogKeyMaxDefeat",PlayLogKeyMaxDefeat);
  tolua_constant(tolua_S,"PlayLogKeyVOXAttackCount",PlayLogKeyVOXAttackCount);
  tolua_constant(tolua_S,"PlayLogKeyLSKAttackCount",PlayLogKeyLSKAttackCount);
  tolua_constant(tolua_S,"PlayLogKeyRunCount",PlayLogKeyRunCount);
  tolua_constant(tolua_S,"PlayLogKeyMaxRepeatChangeCount",PlayLogKeyMaxRepeatChangeCount);
  tolua_constant(tolua_S,"PlayLogKeyTurn",PlayLogKeyTurn);
  tolua_constant(tolua_S,"PlayLogKeyMaxRepeatCount",PlayLogKeyMaxRepeatCount);
  tolua_constant(tolua_S,"PlayLogKeyTensionCount",PlayLogKeyTensionCount);
  tolua_constant(tolua_S,"PlayLogKeyChangeCount",PlayLogKeyChangeCount);
  tolua_constant(tolua_S,"PlayLogKeyHitDamage",PlayLogKeyHitDamage);
  tolua_constant(tolua_S,"PlayLogKeyNum",PlayLogKeyNum);
  tolua_constant(tolua_S,"DamageTypeNone",DamageTypeNone);
  tolua_constant(tolua_S,"DamageTypeHit",DamageTypeHit);
  tolua_constant(tolua_S,"DamageTypeNoDamage",DamageTypeNoDamage);
  tolua_constant(tolua_S,"DamageTypeDisable",DamageTypeDisable);
  tolua_constant(tolua_S,"DamageTypeShield",DamageTypeShield);
  tolua_constant(tolua_S,"DamageTypeInvincible",DamageTypeInvincible);
  tolua_constant(tolua_S,"DamageTypeWeak",DamageTypeWeak);
  tolua_constant(tolua_S,"DamageTypePhysicalResist",DamageTypePhysicalResist);
  tolua_constant(tolua_S,"DamageTypeMagicalResist",DamageTypeMagicalResist);
  tolua_constant(tolua_S,"DamageTypePhysicalInvalid",DamageTypePhysicalInvalid);
  tolua_constant(tolua_S,"DamageTypeMagicalInvalid",DamageTypeMagicalInvalid);
  tolua_constant(tolua_S,"DamageTypeShieldBreak",DamageTypeShieldBreak);
  tolua_constant(tolua_S,"DamageTypeBarrierBreak",DamageTypeBarrierBreak);
  tolua_constant(tolua_S,"DamageTypeDeath",DamageTypeDeath);
  tolua_constant(tolua_S,"DamageTypeAbsorption",DamageTypeAbsorption);
  tolua_constant(tolua_S,"SaveDataCountKeyDead",SaveDataCountKeyDead);
  tolua_constant(tolua_S,"SaveDataCountKeyTurn",SaveDataCountKeyTurn);
  tolua_constant(tolua_S,"SaveDataCountKeyDefeat",SaveDataCountKeyDefeat);
  tolua_constant(tolua_S,"SaveDataCountKeyMPMiss",SaveDataCountKeyMPMiss);
  tolua_constant(tolua_S,"SaveDataCountKeyBoot",SaveDataCountKeyBoot);
  tolua_constant(tolua_S,"SaveDataCountKeyHitDamage",SaveDataCountKeyHitDamage);
  tolua_constant(tolua_S,"SaveDataCountKeyAttackDamage",SaveDataCountKeyAttackDamage);
  tolua_constant(tolua_S,"SaveDataCountKeyDictionaryCount",SaveDataCountKeyDictionaryCount);
  tolua_constant(tolua_S,"SaveDataCountKeyClear",SaveDataCountKeyClear);
  tolua_constant(tolua_S,"SaveDataCountKeyNum",SaveDataCountKeyNum);
  tolua_constant(tolua_S,"DamageLabelTypeAttack",DamageLabelTypeAttack);
  tolua_constant(tolua_S,"DamageLabelTypeHit",DamageLabelTypeHit);
  tolua_constant(tolua_S,"DamageLabelTypeCure",DamageLabelTypeCure);
  tolua_constant(tolua_S,"DamageLabelTypeMPCure",DamageLabelTypeMPCure);
  tolua_cclass(tolua_S,"Skill","Skill","CCObject",NULL);
  tolua_beginmodule(tolua_S,"Skill");
   tolua_function(tolua_S,"getPower",tolua_VOXCHRONICLE_Skill_getPower00);
   tolua_function(tolua_S,"getIdentifier",tolua_VOXCHRONICLE_Skill_getIdentifier00);
   tolua_function(tolua_S,"getName",tolua_VOXCHRONICLE_Skill_getName00);
   tolua_function(tolua_S,"getMP",tolua_VOXCHRONICLE_Skill_getMP00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Enemy","Enemy","CCSprite",NULL);
  tolua_beginmodule(tolua_S,"Enemy");
   tolua_function(tolua_S,"getIdentifier",tolua_VOXCHRONICLE_Enemy_getIdentifier00);
   tolua_function(tolua_S,"getRow",tolua_VOXCHRONICLE_Enemy_getRow00);
   tolua_function(tolua_S,"getCol",tolua_VOXCHRONICLE_Enemy_getCol00);
   tolua_function(tolua_S,"getHP",tolua_VOXCHRONICLE_Enemy_getHP00);
   tolua_function(tolua_S,"getAttack",tolua_VOXCHRONICLE_Enemy_getAttack00);
   tolua_function(tolua_S,"getMaxHP",tolua_VOXCHRONICLE_Enemy_getMaxHP00);
   tolua_function(tolua_S,"getType",tolua_VOXCHRONICLE_Enemy_getType00);
   tolua_function(tolua_S,"getName",tolua_VOXCHRONICLE_Enemy_getName00);
   tolua_function(tolua_S,"getItem",tolua_VOXCHRONICLE_Enemy_getItem00);
   tolua_function(tolua_S,"moveRow",tolua_VOXCHRONICLE_Enemy_moveRow00);
   tolua_function(tolua_S,"setRow",tolua_VOXCHRONICLE_Enemy_setRow00);
   tolua_function(tolua_S,"setMaxHP",tolua_VOXCHRONICLE_Enemy_setMaxHP00);
   tolua_function(tolua_S,"setCol",tolua_VOXCHRONICLE_Enemy_setCol00);
   tolua_function(tolua_S,"setAnimationClip",tolua_VOXCHRONICLE_Enemy_setAnimationClip00);
   tolua_function(tolua_S,"setDefaultAnimationClip",tolua_VOXCHRONICLE_Enemy_setDefaultAnimationClip00);
   tolua_function(tolua_S,"setCounter",tolua_VOXCHRONICLE_Enemy_setCounter00);
   tolua_function(tolua_S,"setHP",tolua_VOXCHRONICLE_Enemy_setHP00);
   tolua_function(tolua_S,"setExp",tolua_VOXCHRONICLE_Enemy_setExp00);
   tolua_function(tolua_S,"setItem",tolua_VOXCHRONICLE_Enemy_setItem00);
   tolua_function(tolua_S,"setSkillType",tolua_VOXCHRONICLE_Enemy_setSkillType00);
   tolua_function(tolua_S,"setAttack",tolua_VOXCHRONICLE_Enemy_setAttack00);
   tolua_function(tolua_S,"getRegister",tolua_VOXCHRONICLE_Enemy_getRegister00);
   tolua_function(tolua_S,"setRegister",tolua_VOXCHRONICLE_Enemy_setRegister00);
   tolua_function(tolua_S,"hasRegister",tolua_VOXCHRONICLE_Enemy_hasRegister00);
   tolua_function(tolua_S,"getSpecies",tolua_VOXCHRONICLE_Enemy_getSpecies00);
   tolua_variable(tolua_S,"__IRegister__",tolua_get_Enemy___IRegister__,NULL);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Species","Species","CCObject",NULL);
  tolua_beginmodule(tolua_S,"Species");
   tolua_function(tolua_S,"isEnableSkill",tolua_VOXCHRONICLE_Species_isEnableSkill00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Character","Character","CCObject",NULL);
  tolua_beginmodule(tolua_S,"Character");
   tolua_function(tolua_S,"getName",tolua_VOXCHRONICLE_Character_getName00);
   tolua_function(tolua_S,"getCharacterType",tolua_VOXCHRONICLE_Character_getCharacterType00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CharacterManager","CharacterManager","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CharacterManager");
   tolua_function(tolua_S,"getShield",tolua_VOXCHRONICLE_CharacterManager_getShield00);
   tolua_function(tolua_S,"setShield",tolua_VOXCHRONICLE_CharacterManager_setShield00);
   tolua_function(tolua_S,"changeCharacter",tolua_VOXCHRONICLE_CharacterManager_changeCharacter00);
   tolua_function(tolua_S,"addTension",tolua_VOXCHRONICLE_CharacterManager_addTension00);
   tolua_function(tolua_S,"getTension",tolua_VOXCHRONICLE_CharacterManager_getTension00);
   tolua_function(tolua_S,"getLevel",tolua_VOXCHRONICLE_CharacterManager_getLevel00);
   tolua_function(tolua_S,"setLevel",tolua_VOXCHRONICLE_CharacterManager_setLevel00);
   tolua_function(tolua_S,"addHP",tolua_VOXCHRONICLE_CharacterManager_addHP00);
   tolua_function(tolua_S,"addMP",tolua_VOXCHRONICLE_CharacterManager_addMP00);
   tolua_function(tolua_S,"getDrumLevel",tolua_VOXCHRONICLE_CharacterManager_getDrumLevel00);
   tolua_function(tolua_S,"setDrumLevel",tolua_VOXCHRONICLE_CharacterManager_setDrumLevel00);
   tolua_function(tolua_S,"damage",tolua_VOXCHRONICLE_CharacterManager_damage00);
   tolua_function(tolua_S,"getHP",tolua_VOXCHRONICLE_CharacterManager_getHP00);
   tolua_function(tolua_S,"getMP",tolua_VOXCHRONICLE_CharacterManager_getMP00);
   tolua_function(tolua_S,"getMaxHP",tolua_VOXCHRONICLE_CharacterManager_getMaxHP00);
   tolua_function(tolua_S,"getMaxMP",tolua_VOXCHRONICLE_CharacterManager_getMaxMP00);
   tolua_function(tolua_S,"resetTension",tolua_VOXCHRONICLE_CharacterManager_resetTension00);
   tolua_function(tolua_S,"getCurrentCharacter",tolua_VOXCHRONICLE_CharacterManager_getCurrentCharacter00);
   tolua_function(tolua_S,"getRepeatCount",tolua_VOXCHRONICLE_CharacterManager_getRepeatCount00);
   tolua_function(tolua_S,"setRepeatCount",tolua_VOXCHRONICLE_CharacterManager_setRepeatCount00);
   tolua_function(tolua_S,"getLastSkill",tolua_VOXCHRONICLE_CharacterManager_getLastSkill00);
   tolua_function(tolua_S,"getExp",tolua_VOXCHRONICLE_CharacterManager_getExp00);
   tolua_function(tolua_S,"getExpWithLevel",tolua_VOXCHRONICLE_CharacterManager_getExpWithLevel00);
   tolua_function(tolua_S,"setExp",tolua_VOXCHRONICLE_CharacterManager_setExp00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"EnemyManager","EnemyManager","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"EnemyManager");
   tolua_function(tolua_S,"nextTurn",tolua_VOXCHRONICLE_EnemyManager_nextTurn00);
   tolua_function(tolua_S,"popEnemyAt",tolua_VOXCHRONICLE_EnemyManager_popEnemyAt00);
   tolua_function(tolua_S,"getBoss",tolua_VOXCHRONICLE_EnemyManager_getBoss00);
   tolua_function(tolua_S,"getEnemies",tolua_VOXCHRONICLE_EnemyManager_getEnemies00);
   tolua_function(tolua_S,"setBoss",tolua_VOXCHRONICLE_EnemyManager_setBoss00);
   tolua_function(tolua_S,"loadEnemyTextureAsync",tolua_VOXCHRONICLE_EnemyManager_loadEnemyTextureAsync00);
   tolua_function(tolua_S,"removeEnemy",tolua_VOXCHRONICLE_EnemyManager_removeEnemy00);
   tolua_function(tolua_S,"removeAllNormalEnemies",tolua_VOXCHRONICLE_EnemyManager_removeAllNormalEnemies00);
   tolua_function(tolua_S,"removeAllEnemies",tolua_VOXCHRONICLE_EnemyManager_removeAllEnemies00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"MessageManager","MessageManager","CCObject",NULL);
  tolua_beginmodule(tolua_S,"MessageManager");
   tolua_function(tolua_S,"sharedManager",tolua_VOXCHRONICLE_MessageManager_sharedManager00);
   tolua_function(tolua_S,"pushMessage",tolua_VOXCHRONICLE_MessageManager_pushMessage00);
   tolua_function(tolua_S,"pushRandomMessageFromLua",tolua_VOXCHRONICLE_MessageManager_pushRandomMessageFromLua00);
   tolua_function(tolua_S,"pushRandomMessageFromFunction",tolua_VOXCHRONICLE_MessageManager_pushRandomMessageFromFunction00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"EffectLayer","EffectLayer","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"EffectLayer");
   tolua_function(tolua_S,"sharedLayer",tolua_VOXCHRONICLE_EffectLayer_sharedLayer00);
   tolua_function(tolua_S,"addPopupWindow",tolua_VOXCHRONICLE_EffectLayer_addPopupWindow00);
   tolua_function(tolua_S,"addEffectOnEnemy",tolua_VOXCHRONICLE_EffectLayer_addEffectOnEnemy00);
   tolua_function(tolua_S,"addDamageLabel",tolua_VOXCHRONICLE_EffectLayer_addDamageLabel00);
   tolua_function(tolua_S,"addDamageLabelOnEnemy",tolua_VOXCHRONICLE_EffectLayer_addDamageLabelOnEnemy00);
   tolua_function(tolua_S,"setCutinExtension",tolua_VOXCHRONICLE_EffectLayer_setCutinExtension00);
   tolua_function(tolua_S,"getPopupWindow",tolua_VOXCHRONICLE_EffectLayer_getPopupWindow00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PopupWindow","PopupWindow","CCSprite",NULL);
  tolua_beginmodule(tolua_S,"PopupWindow");
   tolua_function(tolua_S,"getPage",tolua_VOXCHRONICLE_PopupWindow_getPage00);
   tolua_function(tolua_S,"setText",tolua_VOXCHRONICLE_PopupWindow_setText00);
   tolua_function(tolua_S,"addImage",tolua_VOXCHRONICLE_PopupWindow_addImage00);
   tolua_function(tolua_S,"addImage",tolua_VOXCHRONICLE_PopupWindow_addImage01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"IRegister","IRegister","",NULL);
  tolua_beginmodule(tolua_S,"IRegister");
   tolua_function(tolua_S,"getRegister",tolua_VOXCHRONICLE_IRegister_getRegister00);
   tolua_function(tolua_S,"setRegister",tolua_VOXCHRONICLE_IRegister_setRegister00);
   tolua_function(tolua_S,"hasRegister",tolua_VOXCHRONICLE_IRegister_hasRegister00);
   tolua_function(tolua_S,"getBool",tolua_VOXCHRONICLE_IRegister_getBool00);
   tolua_function(tolua_S,"setBool",tolua_VOXCHRONICLE_IRegister_setBool00);
   tolua_function(tolua_S,"clearRegister",tolua_VOXCHRONICLE_IRegister_clearRegister00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"EnemySkill","EnemySkill","CCObject",NULL);
  tolua_beginmodule(tolua_S,"EnemySkill");
   tolua_function(tolua_S,"getName",tolua_VOXCHRONICLE_EnemySkill_getName00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Map","Map","CCObject",NULL);
  tolua_beginmodule(tolua_S,"Map");
   tolua_function(tolua_S,"getMaxLevel",tolua_VOXCHRONICLE_Map_getMaxLevel00);
   tolua_function(tolua_S,"getInitialLevel",tolua_VOXCHRONICLE_Map_getInitialLevel00);
   tolua_function(tolua_S,"getName",tolua_VOXCHRONICLE_Map_getName00);
   tolua_function(tolua_S,"getIdentifier",tolua_VOXCHRONICLE_Map_getIdentifier00);
   tolua_function(tolua_S,"isBossStage",tolua_VOXCHRONICLE_Map_isBossStage00);
   tolua_function(tolua_S,"changeBackgroundImage",tolua_VOXCHRONICLE_Map_changeBackgroundImage00);
   tolua_variable(tolua_S,"__IRegister__",tolua_get_Map___IRegister__,NULL);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"SaveData","SaveData","CCObject",NULL);
  tolua_beginmodule(tolua_S,"SaveData");
   tolua_function(tolua_S,"sharedData",tolua_VOXCHRONICLE_SaveData_sharedData00);
   tolua_function(tolua_S,"isUnlockAchievement",tolua_VOXCHRONICLE_SaveData_isUnlockAchievement00);
   tolua_function(tolua_S,"unlockAchievement",tolua_VOXCHRONICLE_SaveData_unlockAchievement00);
   tolua_function(tolua_S,"getDefeatedCount",tolua_VOXCHRONICLE_SaveData_getDefeatedCount00);
   tolua_function(tolua_S,"addDefeatedCountForEnemy",tolua_VOXCHRONICLE_SaveData_addDefeatedCountForEnemy00);
   tolua_function(tolua_S,"addCountFor",tolua_VOXCHRONICLE_SaveData_addCountFor00);
   tolua_function(tolua_S,"addCountFor",tolua_VOXCHRONICLE_SaveData_addCountFor01);
   tolua_function(tolua_S,"getCountFor",tolua_VOXCHRONICLE_SaveData_getCountFor00);
   tolua_function(tolua_S,"setClearedForMap",tolua_VOXCHRONICLE_SaveData_setClearedForMap00);
   tolua_function(tolua_S,"isClearedMap",tolua_VOXCHRONICLE_SaveData_isClearedMap00);
   tolua_function(tolua_S,"save",tolua_VOXCHRONICLE_SaveData_save00);
   tolua_function(tolua_S,"load",tolua_VOXCHRONICLE_SaveData_load00);
   tolua_function(tolua_S,"getAllEnemyDictionaryCount",tolua_VOXCHRONICLE_SaveData_getAllEnemyDictionaryCount00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PlayLog","PlayLog","CCObject",NULL);
  tolua_beginmodule(tolua_S,"PlayLog");
   tolua_function(tolua_S,"getCount",tolua_VOXCHRONICLE_PlayLog_getCount00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"VQTime","VQTime","CCObject",NULL);
  tolua_beginmodule(tolua_S,"VQTime");
   tolua_function(tolua_S,"sharedTime",tolua_VOXCHRONICLE_VQTime_sharedTime00);
   tolua_function(tolua_S,"getCurrentHour",tolua_VOXCHRONICLE_VQTime_getCurrentHour00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"SEManager","SEManager","CCObject",NULL);
  tolua_beginmodule(tolua_S,"SEManager");
   tolua_function(tolua_S,"sharedManager",tolua_VOXCHRONICLE_SEManager_sharedManager00);
   tolua_function(tolua_S,"registerEffect",tolua_VOXCHRONICLE_SEManager_registerEffect00);
   tolua_function(tolua_S,"registerEffect",tolua_VOXCHRONICLE_SEManager_registerEffect01);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_VOXCHRONICLE (lua_State* tolua_S) {
 return tolua_VOXCHRONICLE_open(tolua_S);
};
#endif

