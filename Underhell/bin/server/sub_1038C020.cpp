void __thiscall sub_1038C020(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax

  if ( *(_BYTE *)(this + 4892) && sub_102A8560(this + 4876)
    || (v3 = sub_101679A0((int)"gordon_precriminal"), sub_10167A00(v3) != 1) )
  {
    if ( a2 < 1000 )
      goto LABEL_11;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this) == this + 4804 )
    {
      sub_10388AF0((void *)this, a2);
      return;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this) == this + 4548 )
    {
      sub_10389E20((_DWORD *)this, a2);
      return;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this) == this + 4752 )
    {
      sub_10389F00(this, a2);
    }
    else
    {
LABEL_11:
      switch ( a2 )
      {
        case 0:
          sub_100AC410(this + 5160, "METROPOLICE_FREEZE", 1, 1);
          break;
        case 1:
          sub_100AC410(this + 5160, "METROPOLICE_OVER_HERE", 1, 1);
          break;
        case 2:
          sub_100AC410(this + 5160, "METROPOLICE_HES_RUNNING", 2, 1);
          break;
        case 3:
          sub_100AC410(this + 5160, "METROPOLICE_TAKE_HIM_DOWN", 2, 1);
          break;
        case 4:
          sub_100AC410(this + 5160, "METROPOLICE_ARREST_IN_POS", 1, 1);
          break;
        case 5:
          sub_100AC410(this + 5160, "METROPOLICE_DEPLOY_MANHACK", 0, 2);
          break;
        case 6:
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          v5 = v4;
          if ( v4 && (*(_DWORD *)(this + 248) & 0x200000) == 0 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4)
              && *(int *)(v5 + 220) <= 20
              && (*(_DWORD *)(this + 2716) & 0x20000000) == 0
              && sub_100AC410(this + 5160, "METROPOLICE_PLAYERHIT", 2, 2) >= 0 )
            {
              sub_100B19C0(*(_DWORD **)(this + 2796), 0x20000000);
            }
            if ( sub_100A64B0((int *)*(_DWORD *)(*(_DWORD *)(this + 2588) + 36)) > 240.0 )
              sub_100AC410(this + 5160, "METROPOLICE_FLANK", 0, 2);
          }
          break;
        case 7:
          v6 = *(_DWORD *)(this + 2324);
          if ( v6 == 2 || v6 == 1 )
            sub_100AC410(this + 5160, "METROPOLICE_HEARD_SOMETHING", 1, 2);
          break;
        default:
          return;
      }
    }
  }
}
