void __thiscall sub_1029DD80(int this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  int v6; // ecx
  char v7; // bl
  int *v8; // ecx
  _DWORD *v9; // esi
  int v10; // ecx
  int v11; // eax
  _DWORD v12[12]; // [esp+Ch] [ebp-38h] BYREF
  _DWORD v13[2]; // [esp+3Ch] [ebp-8h] BYREF

  switch ( *a2 )
  {
    case 0x186A0:
      if ( *(_DWORD *)(this + 24) != -1
        && (v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1],
            off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] == *(_DWORD *)(this + 24) >> 12)
        && (v9 = (_DWORD *)*v8) != 0 )
      {
        if ( (v9[63] & 0x800) != 0 )
          sub_100DAE60(*v8);
        v12[0] = 4;
        v12[1] = v9[145];
        v10 = *(_DWORD *)(this + 4);
        v12[2] = v9[146];
        v11 = v9[147];
        *(float *)&v12[8] = -1.0;
        v12[3] = v11;
        *(float *)&v12[9] = -1.0;
        memset(&v12[4], 255, 16);
        v12[10] = 0;
        v12[11] = v9;
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(v10 + 2588) + 20))(
                *(_DWORD *)(v10 + 2588),
                v12,
                0) )
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
            *(_DWORD *)(this + 4),
            "Can't build path\n");
        if ( (v9[63] & 0x800) != 0 )
          sub_100DAE60((int)v9);
        sub_1007DF50((int)(v9 + 176));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
          *(_DWORD *)(this + 4),
          "ai_goal_operator has no location entity\n");
      }
      break;
    case 0x186A1:
      v6 = *(_DWORD *)(this + 4);
      v7 = *(_BYTE *)(this + 8);
      *(float *)&v13[1] = 0.0;
      v13[0] = 49;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 1256))(v6, v13);
      *(_BYTE *)(this + 8) = v7;
      break;
    case 0x186A2:
      v3 = *(_DWORD *)(sub_1029D7B0((_DWORD *)this) + 948);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v4 = (_DWORD *)(sub_1029D7B0((_DWORD *)this) + 900);
          sub_1010DD80(v4, 0, 0.0);
        }
      }
      else
      {
        v5 = (_DWORD *)(sub_1029D7B0((_DWORD *)this) + 876);
        sub_1010DD80(v5, 0, 0.0);
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      break;
    default:
      sub_1004B450((_BYTE *)this, (int)a2);
      break;
  }
}
