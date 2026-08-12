void __thiscall sub_101B97B0(int this, int a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp-14h]
  float v6; // [esp+8h] [ebp-10h]
  float v7; // [esp+10h] [ebp-8h]

  if ( *(_DWORD *)(this + 4) )
  {
    v7 = (float)*(unsigned __int8 *)(a2 + 91);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 4) + 12))(LODWORD(v7));
  }
  if ( *(_DWORD *)(this + 8) )
  {
    v3 = sin(*(float *)(this + 16) * 0.0174532925199433) * *((float *)off_103DC81C + 3) * *(float *)(this + 12);
    v4 = cos(*(float *)(this + 16) * 0.0174532925199433) * *((float *)off_103DC81C + 3) * *(float *)(this + 12);
    if ( v3 < 0.0 )
      v3 = v3 + 1.0 - (double)(int)v3;
    if ( v4 < 0.0 )
      v4 = 1.0 - (double)(int)v4 + v4;
    v6 = v4 - (double)(int)v4;
    v5 = v3 - (double)(int)v3;
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 8) + 40))(
      *(_DWORD *)(this + 8),
      LODWORD(v5),
      LODWORD(v6),
      0.0);
  }
}
