unsigned int __fastcall sub_10407CF0(int a1, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int *v10; // edi
  float v12[3]; // [esp+18h] [ebp-1Ch] BYREF
  float v13[3]; // [esp+24h] [ebp-10h] BYREF
  int v14; // [esp+30h] [ebp-4h] BYREF

  sub_100E0970(a1, a2, 4, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, "models/weapons/w_missile.mdl");
  sub_1025F360((_DWORD *)a1, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) & 0xFFFB);
  sub_1023C380((_DWORD *)a1, (int)"Missile.Ignite", 0.0, 0);
  sub_10422220(a1 + 728, v13);
  v12[0] = v13[0] * 1500.0;
  v12[1] = v13[1] * 1500.0;
  v12[2] = 1500.0 * v13[2];
  sub_100DD660(a1, v12);
  sub_100EC3F0((_DWORD *)a1, (int)sub_104063C0, 0.0, 0);
  sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
  v3 = *(_DWORD *)(a1 + 2104);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 2104) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2104) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 2104) & 0xFFF) + 2] == v5 ? (_DWORD *)*v4 : 0;
        if ( sub_100D1940(v6) )
        {
          v7 = *(_DWORD *)(a1 + 2104);
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 2104) & 0xFFF) + 2] != v7 >> 12 )
            v8 = 0;
          else
            v8 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 2104) & 0xFFF) + 1];
          v9 = sub_100D1940(v8);
          v10 = (int *)v9;
          if ( v9 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
          {
            v14 = 1087234559;
            sub_102600B0(v10, &v14, 0.1, 0.0, 1);
            sub_101E3110(v10, 8u, 0, 4u);
          }
        }
      }
    }
  }
  return sub_10407920((_DWORD *)a1);
}
