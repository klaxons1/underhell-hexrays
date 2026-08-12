int __thiscall sub_103D41E0(int this, int a2, int a3)
{
  char v4; // al
  int v5; // ebx
  int v6; // eax
  int *v7; // ecx
  int v8; // eax
  int *v9; // ecx
  int v10; // ecx
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  float v15; // [esp+1Ch] [ebp-18h] BYREF
  float v16; // [esp+20h] [ebp-14h]
  float v17; // [esp+28h] [ebp-Ch] BYREF
  float v18; // [esp+2Ch] [ebp-8h]
  float v19; // [esp+30h] [ebp-4h]
  int v20; // [esp+3Ch] [ebp+8h]

  v4 = *(_BYTE *)(this + 24);
  v5 = this - 1120;
  if ( v4 != 2 )
  {
    if ( !v4 )
      *(float *)(v5 + 1164) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(v5 + 1144) = 2;
  }
  sub_103D3C70((_DWORD *)(this - 1120));
  if ( *(_BYTE *)(this + 57) )
  {
    v6 = this - 1120;
    if ( *(_BYTE *)(this - 1036) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 1177);
    }
    *(_BYTE *)(this + 57) = 0;
  }
  if ( *(_BYTE *)(this + 58) != 1 )
  {
    v8 = this - 1120;
    if ( *(_BYTE *)(this - 1036) )
    {
      *(_BYTE *)(v8 + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(v8 + 24);
      if ( v9 )
        sub_100194B0(v9, 1178);
    }
    *(_BYTE *)(this + 58) = 1;
  }
  sub_100EC3F0((_DWORD *)v5, 0, *(float *)(dword_106B31C8 + 12), off_1067E558);
  sub_100EBE30(v5, 23);
  v10 = *(_DWORD *)(this + 32);
  if ( v10 )
  {
    sub_10242BA0(v10);
    sub_1005C620((_BYTE *)(*(_DWORD *)(this + 32) + 116), 255, 255, 255, 255);
  }
  *(float *)(this + 28) = 1500.0;
  sub_103D3100((void *)v5, a2);
  if ( a3 == 3 )
  {
    (*(void (__stdcall **)(float *, float *))(**(_DWORD **)(this - 696) + 196))(&flt_106F1CA8, &flt_106F1CA8);
  }
  else
  {
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)a2 + 528))(a2, &v17, 0, 0);
    sub_10422540(&v17, &v15);
    v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -55, 55);
    v15 = (double)v11 + v15;
    v20 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -55, 55);
    v16 = (double)v20 + v16;
    sub_104222B0(&v15, &v17, 0, 0);
    v12 = *(float *)(this + 28);
    v13 = *(_DWORD *)(this - 696);
    v17 = v17 * v12;
    v18 = v18 * v12;
    v19 = v12 * v19;
    (*(void (__stdcall **)(float *, float *))(*(_DWORD *)v13 + 196))(&v17, &flt_106F1CA8);
  }
  sub_103D40C0(v5);
  return sub_100EC3F0((_DWORD *)v5, 0, *(float *)(dword_106B31C8 + 12), off_1067E560);
}
