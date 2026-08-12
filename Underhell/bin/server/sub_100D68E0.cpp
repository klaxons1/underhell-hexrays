BOOL __thiscall sub_100D68E0(void *this)
{
  float v2[3]; // [esp+0h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(void *, float *, _DWORD))(*(_DWORD *)this + 540))(this, v2, 0);
  return v2[0] != flt_106F1CA8 || v2[1] != flt_106F1CAC || v2[2] != flt_106F1CB0;
}
