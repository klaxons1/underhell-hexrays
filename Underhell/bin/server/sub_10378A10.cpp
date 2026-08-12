int __thiscall sub_10378A10(int this)
{
  int i; // edi
  int v3; // ecx
  int result; // eax
  float v5; // [esp+0h] [ebp-10h]

  for ( i = 0; i < *(_DWORD *)(this + 3640); ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3);
  }
  sub_1002FB90(this);
  sub_10375B90(this);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  if ( *(_BYTE *)(this + 4230) )
  {
    *(_BYTE *)(this + 4230) = 1;
    sub_101AAE70("blood_drip_synth_01", 4, this, dword_10674304, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC3F0((_DWORD *)this, (int)sub_103717B0, v5, off_10674250);
  }
  return result;
}
