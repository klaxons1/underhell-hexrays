int __thiscall sub_10185A90(float *this)
{
  float v3; // [esp+8h] [ebp-8h] BYREF
  float v4; // [esp+Ch] [ebp-4h]

  (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(
    dword_1047CA6C,
    255,
    0,
    0,
    255);
  sub_101859B0((int)this, &v3, this + 1588);
  return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
           dword_1047CA6C,
           (int)(v3 - 2.0),
           (int)(v4 - 2.0),
           (int)(v3 + 2.0),
           (int)(v4 + 2.0));
}
