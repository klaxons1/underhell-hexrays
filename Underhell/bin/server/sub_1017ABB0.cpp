int __thiscall sub_1017ABB0(int this)
{
  int result; // eax
  float v3; // [esp+8h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 872) )
  {
    if ( *(_DWORD *)(this + 884) )
      *(float *)(this + 876) = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 *(float *)(this + 888),
                                 *(float *)(this + 892));
    v3 = *(float *)(this + 876) + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0((int *)this, v3, 0);
  }
  return result;
}
