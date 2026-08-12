void __thiscall sub_1019FCA0(int this, int a2)
{
  double v3; // st7
  float v4; // [esp+10h] [ebp+8h]

  sub_10024A70(this, a2);
  if ( *(_BYTE *)(this + 3384) )
    v3 = 1.0;
  else
    v3 = 0.0;
  v4 = v3;
  if ( v4 != *(float *)(this + 3388) )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)(this - 8) + 408))(-1293.0);
}
