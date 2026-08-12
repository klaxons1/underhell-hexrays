void sub_1003D7F0()
{
  int v0; // eax
  int v1; // eax
  int v2; // ebx
  int *v3; // esi
  int v4; // edi
  char v5; // al
  float v6; // [esp+14h] [ebp-28h]
  int v7; // [esp+24h] [ebp-18h] BYREF
  char v8; // [esp+28h] [ebp-14h]
  float v9; // [esp+2Ch] [ebp-10h]
  int v10; // [esp+30h] [ebp-Ch]
  int v11; // [esp+34h] [ebp-8h]
  _BYTE v12[4]; // [esp+38h] [ebp-4h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseEntity::InterpolateServerEntities", 0, "Interpolation", 0, 4);
  byte_103D89C8 = *(_DWORD *)(dword_10404DB4 + 48) != 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 308))(dword_1041315C) )
    byte_103D89C8 = 0;
  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 284))(dword_1041315C);
  if ( v0 && ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v0 + 84))(v0) > 0.5 )
    byte_103D89C8 = 0;
  if ( sub_1000FCC0() != byte_103D89C0
    || (unsigned __int8)sub_100755A0() != byte_103D89C1
    || *(_DWORD *)(dword_10404B84 + 48) != dword_10404B58 )
  {
    byte_103D89C0 = sub_1000FCC0();
    byte_103D89C1 = sub_100755A0();
    dword_10404B58 = *(_DWORD *)(dword_10404B84 + 48);
    sub_1007AA40(v12);
    v1 = sub_1007AE80(v12);
    v11 = v1;
    if ( v1 )
    {
      while ( 1 )
      {
        if ( v1 != -20 && *(int *)(v1 + 32) > 0 )
        {
          v2 = 0;
          v10 = *(_DWORD *)(v1 + 32);
          while ( 1 )
          {
            v3 = *(int **)(*(_DWORD *)(v1 + 20) + v2 + 8);
            v4 = *v3;
            v5 = (*(int (__thiscall **)(int *))(*v3 + 28))(v3);
            v6 = sub_10038610(v11, v5);
            (*(void (__thiscall **)(int *, _DWORD))(v4 + 8))(v3, LODWORD(v6));
            v2 += 12;
            if ( !--v10 )
              break;
            v1 = v11;
          }
        }
        v11 = sub_1007AE80(v12);
        if ( !v11 )
          break;
        v1 = v11;
      }
    }
  }
  v9 = flt_10433C50;
  v7 = dword_10433C48;
  dword_10433C48 = (int)&v7;
  v8 = byte_10433C4C;
  byte_10433C4C = 0;
  flt_10433C50 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 60))(dword_1041315C);
  if ( *(_DWORD *)(dword_10404BCC + 48)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 312))(dword_1041315C) )
  {
    byte_10433C4C = 1;
  }
  sub_1003D5E0();
  sub_10039880();
  flt_10433C50 = v9;
  byte_10433C4C = v8;
  dword_10433C48 = v7;
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
