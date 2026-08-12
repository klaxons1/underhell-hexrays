void __usercall sub_101ED130(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>)
{
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // edi
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float v15; // [esp+10h] [ebp-18h]
  char v18; // [esp+27h] [ebp-1h] BYREF

  if ( *(_BYTE *)(a1 + 306) == 2 )
  {
    v5 = *(_DWORD *)(a1 + 4264);
    if ( (v5 == -1
       || off_1061BE18[4 * (*(_DWORD *)(a1 + 4264) & 0xFFF) + 2] != v5 >> 12
       || (v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4264) & 0xFFF) + 1]) == 0
       || v6 == a1)
      && !*(_BYTE *)(a1 + 5216) )
    {
      v7 = sub_100CF460((_DWORD *)a1);
      if ( !v7
        || (v8 = *(_DWORD *)(v7 + 1160), !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1432))(v7))
        && v8 != 183
        && ((a4 = *(float *)(dword_106B31C8 + 12), a4 >= *(float *)(v7 + 1132))
         || *(_BYTE *)(sub_100D0CC0((__int16 *)v7) + 80)) )
      {
        if ( !*(_BYTE *)(a1 + 3368) && (*(_BYTE *)(a1 + 3308) & 1) == 0 )
        {
          if ( *(_BYTE *)(a1 + 2122) )
          {
            sub_101E97E0(a1, a4);
          }
          else if ( sub_100CF610((_DWORD *)a1, "grenade") > 0 )
          {
            if ( *(_BYTE *)(a1 + 2137) )
              sub_101ECF40(a1);
            v9 = sub_101E7EA0((_DWORD *)a1, 1);
            v10 = v9;
            if ( v9 )
            {
              (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v9 + 864))(v9, 32, a3, a2);
              if ( *(_BYTE *)(a1 + 2121) )
              {
                v11 = *(_BYTE *)(a1 + 2122) == 0;
                *(_BYTE *)(a1 + 2123) = 0;
                if ( v11 )
                {
                  if ( !*(_BYTE *)(a1 + 5040) && !*(_BYTE *)(a1 + 2172) )
                  {
                    v12 = sub_101E7EA0((_DWORD *)a1, 1);
                    sub_101AB0C0(v12);
                    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1);
                    *(_BYTE *)(a1 + 2172) = *(_BYTE *)(a1 + 2172) == 0;
                  }
                }
                else
                {
                  sub_101E9580((void *)a1, COERCE_INT(*(float *)(a1 + 2128)), 0, 0, 0);
                  v18 = 0;
                  sub_100F7B70((_BYTE *)(a1 + 2122), &v18);
                }
              }
              v18 = 1;
              sub_10172DC0((_BYTE *)(a1 + 2121), &v18);
              *(_BYTE *)(a1 + 2123) = 1;
              v13 = sub_101E7EA0((_DWORD *)a1, 1);
              sub_101AB0C0(v13);
              (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v10 + 840))(
                v10,
                "models/weapons/v_grenade.mdl",
                0);
              v14 = sub_101E7EA0((_DWORD *)a1, 1);
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 836))(v14, 1);
              v15 = *(float *)(dword_106B31C8 + 12) + 0.4;
              sub_100EC4A0((int *)a1, v15, (int)"FlashLightContext");
              if ( v7 )
              {
                if ( !*(_BYTE *)(sub_100D0CC0((__int16 *)v7) + 80) )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 944))(v7, 173);
              }
            }
          }
        }
      }
    }
  }
}
