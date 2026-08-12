int __thiscall sub_100D3E00(int this)
{
  double v2; // st7
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v4);
  if ( !*(_BYTE *)(this + 185) )
  {
    v2 = v4[1];
    *(_BYTE *)(this + 185) = 1;
    *(float *)(this + 192) = v2;
    *(float *)(this + 188) = v4[0];
    *(float *)(this + 196) = 30.0;
  }
  return sub_10229140(&unk_104311B0, 0);
}
