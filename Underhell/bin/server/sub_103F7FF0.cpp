int __usercall sub_103F7FF0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int result; // eax
  _BYTE *v6; // ebx
  const char *v7; // eax
  void *v8; // edi
  double v9; // st6
  int v10; // edx
  int *v11; // ecx
  float *v12; // eax
  _BYTE v15[76]; // [esp+3Ch] [ebp-84h] BYREF
  int v16; // [esp+88h] [ebp-38h]
  float v17[3]; // [esp+90h] [ebp-30h] BYREF
  float v18; // [esp+9Ch] [ebp-24h] BYREF
  float v19; // [esp+A0h] [ebp-20h]
  float v20; // [esp+A4h] [ebp-1Ch]
  float v21; // [esp+A8h] [ebp-18h] BYREF
  float v22; // [esp+ACh] [ebp-14h]
  float v23; // [esp+B0h] [ebp-10h]
  float v24; // [esp+B4h] [ebp-Ch] BYREF
  double v25; // [esp+B8h] [ebp-8h] BYREF
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  if ( *(int *)(a1 + 1200) > 0 )
  {
    result = sub_100D1940((_DWORD *)a1);
    v6 = (_BYTE *)result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
      if ( (_BYTE)result )
      {
        sub_101E3110(v6, 2u, 0, 4u);
        (*(void (__thiscall **)(_BYTE *, float *, _DWORD, int))(*(_DWORD *)v6 + 1504))(v6, &v21, 0.0, a2);
        (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)v6 + 968))(v6, &v18);
        sub_10422540(&v21, v17);
        v7 = *(const char **)(dword_106B31C8 + 60);
        if ( !v7 )
          v7 = String;
        if ( v7 == "ep2_outland_10" || !_stricmp(v7, "ep2_outland_10") )
        {
          v24 = v21 * 24.0 + v18;
          *(float *)&v25 = v22 * 24.0 + v19;
          *((float *)&v25 + 1) = 24.0 * v23 + v20;
          sub_1002A5F0((int)&savedregs, a1, &v18, &v24, 33570827, (int)v6, 0, (int)v15);
          if ( v16 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 220))(v16) == 3 )
            {
              v18 = v21 * 24.0 + v18;
              v19 = v22 * 24.0 + v19;
              v20 = 24.0 * v23 + v20;
            }
          }
        }
        v8 = (void *)sub_101811E0("crossbow_bolt", -1);
        sub_1025F370(v8, &v18, 0);
        sub_100E0EA0((int)v8, v17);
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)v8 + 96))(v8, a3);
        (*(void (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v8 + 76))(v8, v6);
        if ( v6[447] == 3 )
          v9 = 1500.0;
        else
          v9 = 2500.0;
        v24 = v21 * v9;
        *(float *)&v25 = v22 * v9;
        *((float *)&v25 + 1) = v9 * v23;
        sub_100DD660((int)v8, &v24);
        v10 = *(_DWORD *)(a1 + 1200) - 1;
        HIDWORD(v25) = v10;
        if ( *(_DWORD *)(a1 + 1200) != v10 )
        {
          if ( *(_BYTE *)(a1 + 84) )
          {
            *(_BYTE *)(a1 + 88) |= 1u;
          }
          else
          {
            v11 = *(int **)(a1 + 24);
            if ( v11 )
            {
              sub_100194B0(v11, 1200);
              v10 = HIDWORD(v25);
            }
          }
          *(_DWORD *)(a1 + 1200) = v10;
        }
        v24 = -2.0;
        *(float *)&v25 = 0.0;
        *((float *)&v25 + 1) = 0.0;
        sub_100F7A60((float *)v6, &v24);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1132))(a1, 1);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 13, 0.0);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        sub_1023D4B0(1, (float *)(a1 + 580), 200, 0.2, 0, 0, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 181);
        if ( !*(_DWORD *)(a1 + 1200) && sub_100CF5D0(v6, *(_DWORD *)(a1 + 1192)) <= 0 )
          sub_101E8F80((int)v6, (int)"!HEV_AMO0", 0, 0);
        v25 = *(float *)(dword_106B31C8 + 12) + 0.75;
        v12 = sub_1016A120((float *)(a1 + 1136), &v25);
        sub_100D2D00((float *)(a1 + 1132), v12);
        sub_103F7E10(a1);
        result = 3;
        if ( *(_DWORD *)(a1 + 1392) != 3 )
          *(_DWORD *)(a1 + 1392) = 3;
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)a1;
    if ( *(_BYTE *)(a1 + 1146) )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD))(v4 + 1132))(0, 0.0);
      v25 = 0.15;
      return (int)sub_100D2DA0((float *)(a1 + 1132), &v25);
    }
    else
    {
      return (*(int (**)(void))(v4 + 1064))();
    }
  }
  return result;
}
