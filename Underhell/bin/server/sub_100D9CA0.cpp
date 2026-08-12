void __thiscall sub_100D9CA0(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  double v5; // st1
  double v6; // rt1
  double v7; // st1
  double v8; // st2
  double v9; // st3
  double v10; // st4
  double v11; // st5
  int v12[3]; // [esp+18h] [ebp-3Ch] BYREF
  int v13[3]; // [esp+24h] [ebp-30h] BYREF
  int v14[3]; // [esp+30h] [ebp-24h] BYREF
  float v15[3]; // [esp+3Ch] [ebp-18h] BYREF
  float v16; // [esp+48h] [ebp-Ch] BYREF
  float v17; // [esp+4Ch] [ebp-8h]
  float v18; // [esp+50h] [ebp-4h]

  v2 = this[106];
  v3 = 0;
  v4 = 200;
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) )
  {
    v3 = 90;
    v4 = 120;
  }
  if ( this[6] )
  {
    (*(void (__thiscall **)(_DWORD *, float *, float *))(this[80] + 60))(this + 80, v15, &v16);
    v5 = (v15[0] + v16) * 0.5;
    *(float *)v12 = v5;
    v6 = v5;
    v7 = (v15[1] + v17) * 0.5;
    *(float *)&v12[1] = v7;
    v8 = 0.5 * (v15[2] + v18);
    *(float *)&v12[2] = v8;
    v9 = v16 - v6;
    *(float *)v14 = v9;
    v10 = v17 - v7;
    *(float *)&v14[1] = v10;
    v11 = v18 - v8;
    *(float *)&v14[2] = v11;
    *(float *)v13 = -v9;
    *(float *)&v13[1] = -v10;
    *(float *)&v13[2] = -v11;
    sub_1011BB20((int)v12, (int)v13, (int)v14, v3, v4, 0, 0, 0.0);
  }
}
