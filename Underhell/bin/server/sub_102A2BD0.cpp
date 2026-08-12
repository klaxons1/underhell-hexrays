char __thiscall sub_102A2BD0(int this)
{
  char result; // al
  float v3[3]; // [esp+4h] [ebp-Ch] BYREF

  result = sub_102A2A30((_DWORD *)this, v3);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4) + 140))(*(_DWORD *)(this + 4), 0, -1);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 320))(this);
    (*(void (__thiscall **)(_DWORD, float *, float *, float *))(**(_DWORD **)(this + 4) + 416))(
      *(_DWORD *)(this + 4),
      v3,
      &flt_106F1CB4,
      &flt_106F1CA8);
    sub_100EAB80(*(_DWORD **)(this + 4), 8);
    return 1;
  }
  return result;
}
