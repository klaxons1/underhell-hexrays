int __thiscall sub_10027DC0(int this, float *a2)
{
  double v3; // st7
  double v4; // st7
  bool v5; // zf
  double v6; // st7
  float v8; // [esp+4h] [ebp-Ch] BYREF
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+Ch] [ebp-4h]

  if ( sub_1007DE30(*(_DWORD *)(this + 2588)) == 39 )
  {
    v3 = *a2;
    v8 = -a2[1] - *(float *)(this + 716);
    v9 = v3 - *(float *)(this + 720);
    v4 = v10;
  }
  else
  {
    v5 = sub_1007DE30(*(_DWORD *)(this + 2588)) == 40;
    v6 = *a2;
    if ( v5 )
    {
      v8 = a2[1] - *(float *)(this + 716);
      v9 = v6 - *(float *)(this + 720);
      v4 = v10;
    }
    else
    {
      v8 = v6 - *(float *)(this + 716);
      v9 = a2[1] - *(float *)(this + 720);
      v4 = a2[2];
    }
  }
  v10 = v4 - *(float *)(this + 724);
  return sub_10265030(&v8);
}
