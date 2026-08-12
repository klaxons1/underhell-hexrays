void __thiscall sub_100EAD90(int this, float *a2)
{
  double v3; // st7
  float v4; // edx
  float v5; // eax
  float v6[3]; // [esp+8h] [ebp-18h] BYREF
  float v7; // [esp+14h] [ebp-Ch]
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]

  if ( *a2 != flt_106F1CA8 || a2[1] != flt_106F1CAC || a2[2] != flt_106F1CB0 )
  {
    if ( *(_BYTE *)(this + 306) == 6 )
    {
      (*(void (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(this + 424) + 220))(
        *(_DWORD *)(this + 424),
        v6,
        a2);
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 208))(
        *(_DWORD *)(this + 424),
        v6,
        0);
    }
    else
    {
      sub_100E98A0(this, 4);
      v3 = *(float *)(this + 592);
      v4 = a2[1];
      v7 = *a2;
      v5 = a2[2];
      v8 = v4;
      v6[0] = v3 + v7;
      v9 = v5;
      v6[1] = *(float *)(this + 596) + v4;
      v6[2] = *(float *)(this + 600) + v5;
      sub_100D9590((float *)(this + 592), v6);
    }
  }
}
