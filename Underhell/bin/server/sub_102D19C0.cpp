void __thiscall sub_102D19C0(char *this, int a2, float *a3, float *a4, int a5, int a6)
{
  int v7; // eax
  char *v8; // eax
  _DWORD *v9; // edi
  double v10; // st7
  char *v11; // eax
  _DWORD *v12; // edi
  double v13; // st6
  double v14; // rt0
  __int64 v15; // [esp+14h] [ebp-24h]
  float v16; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+2Ch] [ebp-Ch] BYREF
  float v18; // [esp+30h] [ebp-8h]
  float v19; // [esp+34h] [ebp-4h]

  v7 = *((_DWORD *)this + 348);
  if ( v7 == 1 )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 736))(this);
    sub_1023C380(this, (int)"Weapon_functank.Single", 0.0, 0);
  }
  else if ( v7 == 2 )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 736))(this);
    sub_1023C380(this, (int)"NPC_Combine_Cannon.FireBullet", 0.0, 0);
  }
  else
  {
    if ( *((_DWORD *)this + 259) )
    {
      v8 = (char *)*((_DWORD *)this + 259);
      if ( !v8 )
        v8 = (char *)String;
      v9 = sub_10243040(v8, a3, 1);
      v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              15.0,
              20.0);
      sub_102CCE20((int)v9, v16);
      sub_10128950((int)v9, 4, this[116], this[117], this[118], 255, 0);
      v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              40.0,
              80.0);
      *(float *)&v17 = 0.0;
      v18 = 0.0;
      v19 = v10;
      sub_100DD660((int)v9, (float *)&v17);
      sub_102428B0((int)v9, *((float *)this + 258), 0.0);
    }
    if ( *((_DWORD *)this + 260) )
    {
      v11 = (char *)*((_DWORD *)this + 260);
      if ( !v11 )
        v11 = (char *)String;
      v12 = sub_10243040(v11, a3, 1);
      sub_102CCE20((int)v12, 5.0);
      sub_10128950((int)v12, 5, 255, 255, 255, 255, 14);
      sub_102428B0((int)v12, *((float *)this + 258), 0.0);
    }
  }
  if ( a5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a5 + 320))(a5) )
  {
    v13 = 32.0 * a4[2];
    v14 = a4[1] * 32.0;
    *(float *)&v17 = *a4 * 32.0 + *a3;
    v18 = v14 + a3[1];
    v19 = v13 + a3[2];
    sub_1023D4B0(4096, (float *)&v17, 32, 0.2, a5, 4, 0);
  }
  HIDWORD(v15) = this;
  LODWORD(v15) = this;
  sub_1010DD80((_DWORD *)this + 288, v15, 0.0);
  this[1388] = 0;
}
