int __thiscall sub_1012E6C0(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  const char *v9; // [esp-Ch] [ebp-14h]
  int v10; // [esp+4h] [ebp-4h]

  nullsub_4();
  v2 = sub_100422D0();
  this[108] = v2;
  if ( !v2 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 124))(this, 0);
  if ( !*(_BYTE *)(v2 + 3681) || *(int *)(v2 + 136) <= 0 )
  {
    sub_10229140(&unk_10439320, 0);
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 124))(this, 0);
  }
  if ( *(_BYTE *)(v2 + 5288) )
  {
    (*(void (__thiscall **)(_DWORD *, bool))(*this + 124))(this, *(_DWORD *)(dword_10439324 + 48) != 0);
  }
  else
  {
    sub_10229140(&unk_10439320, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 124))(this, 0);
  }
  result = dword_1043936C;
  if ( *(_DWORD *)(dword_1043936C + 48) )
  {
    v4 = this + 110;
    v5 = 28;
    do
    {
      sub_10130F50(0);
      sub_10131B60("../Sprites/Hud/Inventory/Blank");
      sub_10237D10(*v4);
      sub_1025DAD0(Locale);
      v6 = sub_10237D10(*v4);
      sub_1025D6C0(v6);
      ++v4;
      --v5;
    }
    while ( v5 );
    *((_BYTE *)this + 436) = 0;
    result = sub_10229140(&unk_10439368, 0);
  }
  if ( *(_DWORD *)(dword_10439324 + 48) && !*((_BYTE *)this + 436) )
  {
    v7 = this + 110;
    v8 = 4612 - (_DWORD)this;
    v10 = 28;
    do
    {
      result = *(_DWORD *)((char *)v7 + v8 + this[108]);
      if ( result )
      {
        switch ( result )
        {
          case 1:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/AppleRed");
            v9 = "#UnderHell_Inventory_Apple";
            break;
          case 2:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/AppleGreen");
            v9 = "#UnderHell_Inventory_Apple";
            break;
          case 3:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Banana");
            v9 = "#UnderHell_Inventory_Banana";
            break;
          case 4:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Burritos");
            v9 = "#UnderHell_Inventory_Burrito";
            break;
          case 5:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Sandwich");
            v9 = "#UnderHell_Inventory_Sandwich";
            break;
          case 6:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Banana");
            v9 = "#UnderHell_Inventory_BananaBunch";
            break;
          case 7:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Soda1");
            v9 = "#UnderHell_Inventory_Soda";
            break;
          case 8:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Soda2");
            v9 = "#UnderHell_Inventory_Soda";
            break;
          case 9:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Soda3");
            v9 = "#UnderHell_Inventory_Soda";
            break;
          case 10:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Soda4");
            v9 = "#UnderHell_Inventory_Soda";
            break;
          case 11:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Soda5");
            v9 = "#UnderHell_Inventory_Soda";
            break;
          case 12:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/SodaPowerPunch");
            v9 = "#UnderHell_Inventory_MegaSoda";
            break;
          case 13:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Flares");
            v9 = "#UnderHell_Inventory_Flare";
            break;
          case 14:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickGreen");
            v9 = "#UnderHell_Inventory_Glowstick_Green";
            break;
          case 15:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickRed");
            v9 = "#UnderHell_Inventory_Glowstick_Red";
            break;
          case 16:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickBlue");
            v9 = "#UnderHell_Inventory_Glowstick_Blue";
            break;
          case 17:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickYellow");
            v9 = "#UnderHell_Inventory_Glowstick_Yellow";
            break;
          case 18:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickPurple");
            v9 = "#UnderHell_Inventory_Glowstick_Purple";
            break;
          case 19:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickGreenLit");
            v9 = "#UnderHell_Inventory_Glowstick_Green";
            break;
          case 20:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickRedLit");
            v9 = "#UnderHell_Inventory_Glowstick_Red";
            break;
          case 21:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickBlueLit");
            v9 = "#UnderHell_Inventory_Glowstick_Blue";
            break;
          case 22:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickYellowLit");
            v9 = "#UnderHell_Inventory_Glowstick_Yellow";
            break;
          case 23:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/GlowstickPurpleLit");
            v9 = "#UnderHell_Inventory_Glowstick_Purple";
            break;
          case 24:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60(Locale);
            v9 = "#UnderHell_Inventory_Painkillers";
            break;
          case 25:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60(Locale);
            v9 = "#UnderHell_Inventory_Syringe";
            break;
          case 26:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Bandages");
            v9 = "#UnderHell_Inventory_Bandages";
            break;
          case 27:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Healthkit");
            v9 = "#UnderHell_Inventory_Healthkit";
            break;
          case 28:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/HealthSpray");
            v9 = "#UnderHell_Inventory_HealthVial";
            break;
          case 29:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Chocobar");
            v9 = "#UnderHell_Inventory_Chocobar";
            break;
          case 30:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/Orange");
            v9 = "#UnderHell_Inventory_Orange";
            break;
          case 31:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/FMRadios");
            v9 = "#UnderHell_Inventory_FMRadio";
            break;
          case 32:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60("../Sprites/Hud/Items/RadioCrackers");
            v9 = "#UnderHell_Inventory_RadioCracker";
            break;
          default:
            sub_10130F50(*(_DWORD *)((char *)v7 + v8 + this[108]));
            sub_10131B60(Locale);
            v9 = "?";
            break;
        }
        sub_10237D10(*v7);
        result = sub_1025DAD0(v9);
      }
      ++v7;
      --v10;
    }
    while ( v10 );
    *((_BYTE *)this + 436) = 1;
  }
  return result;
}
