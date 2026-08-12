void __thiscall sub_103BA5E0(void *this)
{
  char *v2; // eax
  float *v3; // esi
  const char *v4; // ecx
  const char *v5; // eax
  int v6; // ecx
  float *v7; // esi
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v13; // st7
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // edx
  BOOL (__cdecl *v21)(_DWORD *, _DWORD *); // [esp+Ch] [ebp-30h] BYREF
  int v22; // [esp+10h] [ebp-2Ch]
  int v23; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  int v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  int v27; // [esp+24h] [ebp-18h]
  int v28; // [esp+28h] [ebp-14h]
  float v29; // [esp+2Ch] [ebp-10h]
  float *v30; // [esp+30h] [ebp-Ch] BYREF
  unsigned __int16 v31[3]; // [esp+34h] [ebp-8h] BYREF
  char v32; // [esp+3Bh] [ebp-1h] BYREF

  *((_DWORD *)this + 652) = -1;
  v2 = (char *)*((_DWORD *)this + 974);
  if ( !v2 )
    v2 = (char *)String;
  v3 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v28 = 0;
    v29 = 3.4028235e38;
    v30 = v3;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0xFFFF;
    v26 = -1;
    v27 = 0;
    v21 = sub_1005D140;
    do
    {
      if ( sub_10055120(&v21, (int)&v30) != -1 )
        break;
      v6 = (int)v30;
      v7 = v30;
      if ( ((_DWORD)v30[63] & 0x800) != 0 )
      {
        sub_100DAE60((int)v30);
        v6 = (int)v30;
      }
      v8 = v7[146] - *((float *)this + 146);
      v9 = v8 * v8;
      v10 = v7[145] - *((float *)this + 145);
      v11 = v9;
      v12 = v7[147] - *((float *)this + 147);
      v13 = v10 * v10 + v11 + v12 * v12;
      if ( v29 > v13 )
      {
        v29 = v13;
        v28 = v6;
      }
      sub_10053450(&v21, (int)&v30, v31, &v32);
      v14 = sub_10053540((int)&v21);
      v15 = v31[0];
      v16 = v14;
      v17 = 3 * v14;
      v18 = v22;
      v19 = 4 * v17;
      *(_WORD *)(v19 + v22 + 2) = -1;
      *(_WORD *)(v19 + v18) = -1;
      *(_WORD *)(v19 + v18 + 6) = 0;
      *(_WORD *)(v19 + v18 + 4) = v15;
      if ( v15 == 0xFFFF )
      {
        LOWORD(v25) = v16;
      }
      else
      {
        v20 = 3 * v15;
        if ( v32 )
          *(_WORD *)(v18 + 4 * v20) = v16;
        else
          *(_WORD *)(v18 + 4 * v20 + 2) = v16;
      }
      sub_100553B0((int)&v21, v16);
      ++HIWORD(v25);
      if ( v19 + v22 != -8 )
        *(_DWORD *)(v19 + v22 + 8) = v30;
      v30 = (float *)sub_1007E2C0(*((_DWORD **)this + 647), (int)v30);
    }
    while ( v30 );
    (*(void (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 1864))(this, 2, v28, 6);
    sub_10056440((int)&v21);
  }
  else
  {
    v4 = (const char *)*((_DWORD *)this + 974);
    if ( !v4 )
      v4 = String;
    v5 = (const char *)*((_DWORD *)this + 23);
    if ( !v5 )
      v5 = String;
    DevWarning("%s: Could not find target path '%s'!\n", v5, v4);
    *((_DWORD *)this + 974) = "null";
    sub_1025FAC0((int)this);
  }
}
