int __thiscall sub_10108B40(int this)
{
  bool v2; // zf
  int result; // eax
  float v4; // [esp+0h] [ebp-8h]

  v2 = *(_BYTE *)(this + 929) == 0;
  v4 = *(float *)(this + 108);
  *(_DWORD *)(this + 800) = 3;
  *(_DWORD *)(this + 4) = sub_10108800;
  if ( v2 )
    result = sub_10246AC0(this + 816, v4);
  else
    result = sub_10246BC0(this + 852, v4);
  *(_DWORD *)(this + 1116) = 0;
  return result;
}
