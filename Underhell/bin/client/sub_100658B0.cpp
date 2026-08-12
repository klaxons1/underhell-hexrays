int __thiscall sub_100658B0(int this, float a2)
{
  long double v2; // st7
  double v3; // st6
  double v5; // st5
  int v6; // esi
  int v7; // ebx
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // rt1
  long double v12; // st4
  int v13; // edx
  unsigned __int8 (__thiscall *v14)(int); // eax
  double v15; // st7
  double v16; // st6
  float v18; // [esp+Ch] [ebp-1Ch]
  float v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+18h] [ebp-10h] BYREF
  int v21; // [esp+1Ch] [ebp-Ch] BYREF
  float v22; // [esp+20h] [ebp-8h]
  float v23; // [esp+24h] [ebp-4h]

  v2 = 0.0;
  v3 = 0.0;
  v23 = 0.0;
  v5 = 0.0;
  v22 = 0.0;
  v6 = this;
  v7 = 3;
  do
  {
    if ( *(_BYTE *)(v6 + 12) )
    {
      sub_10065770((_BYTE *)this, v6, a2, (float *)&v21, (float *)&v20);
      v8 = *(float *)&v21 + v23;
      v23 = v8;
      v9 = *(float *)&v20 + v22;
      v22 = v9;
      v10 = v8;
      v2 = 0.0;
      v11 = v10;
      v5 = v9;
      v3 = v11;
    }
    v6 += 20;
    --v7;
  }
  while ( v7 );
  v12 = v2;
  if ( v2 != *(float *)(this + 6892) )
  {
    if ( v2 <= *(float *)(this + 6892) )
      v2 = *(float *)(this + 6892);
    else
      v12 = fabs(*(float *)(this + 6892));
  }
  v13 = *(_DWORD *)dword_1041315C;
  v23 = (v3 + v12) * *(float *)(dword_1040EF3C + 44);
  v14 = *(unsigned __int8 (__thiscall **)(int))(v13 + 312);
  v22 = (v2 + v5) * *(float *)(dword_1040EF3C + 44);
  if ( v14(dword_1041315C) )
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v15 = v22;
    v16 = v23;
  }
  v19 = v15;
  v18 = v16;
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)dword_104131B0 + 92))(
           dword_104131B0,
           LODWORD(v18),
           LODWORD(v19),
           -1);
}
