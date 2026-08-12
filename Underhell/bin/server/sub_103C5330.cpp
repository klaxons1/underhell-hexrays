BOOL __thiscall sub_103C5330(void *this)
{
  float v2[3]; // [esp+0h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(void *, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, v2);
  return (v2[1] + v2[0]) * 0.0 + v2[2] < 0.5;
}
