int __thiscall sub_10142070(void *this, float a2, int a3)
{
  int v3; // ebx
  float v5; // ecx
  int v6; // edx
  int v7; // ecx
  int *v8; // ecx
  int v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  const char *v13; // eax
  float v15; // [esp+Ch] [ebp-Ch] BYREF
  float v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = LODWORD(a2);
  if ( a2 == 0.0 )
    *((_DWORD *)this + 280) = -1;
  else
    *((_DWORD *)this + 280) = *(_DWORD *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 8))(COERCE_FLOAT(LODWORD(a2)));
  *((_DWORD *)this + 281) = a3;
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v5 = *(float *)(v3 + 584);
  v6 = *(_DWORD *)(v3 + 588);
  v15 = *(float *)(v3 + 580);
  v16 = v5;
  v17 = v6;
  sub_101416E0((float *)this + 293, &v15);
  v7 = *((_DWORD *)this + 296);
  a2 = *(float *)(v3 + 820);
  if ( v7 != LODWORD(a2) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v8 = (int *)*((_DWORD *)this + 6);
      if ( v8 )
        sub_100194B0(v8, 1184);
    }
    *((float *)this + 296) = a2;
  }
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  v9 = *((_DWORD *)this + 282);
  v15 = *((float *)this + 145) - *((float *)this + 293);
  v16 = *((float *)this + 146) - *((float *)this + 294);
  if ( v9 != LODWORD(v15) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v10 = (int *)*((_DWORD *)this + 6);
      if ( v10 )
        sub_100194B0(v10, 1128);
    }
    *((float *)this + 282) = v15;
  }
  if ( *((_DWORD *)this + 283) != LODWORD(v16) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v11 = (int *)*((_DWORD *)this + 6);
      if ( v11 )
        sub_100194B0(v11, 1132);
    }
    *((float *)this + 283) = v16;
  }
  if ( *((_DWORD *)this + 284) != *((_DWORD *)this + 295) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v12 = (int *)*((_DWORD *)this + 6);
      if ( v12 )
        sub_100194B0(v12, 1136);
    }
    *((float *)this + 284) = *((float *)this + 295);
  }
  v13 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 28))(v3, &a2);
  if ( !v13 )
    v13 = String;
  return (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, v13);
}
