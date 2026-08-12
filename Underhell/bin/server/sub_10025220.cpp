int __thiscall sub_10025220(float *this)
{
  int result; // eax
  double v3; // st7
  unsigned __int64 v4; // kr00_8
  float v5; // [esp+0h] [ebp-1Ch]

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 264))(this);
  if ( (_BYTE)result )
  {
    qword_10690DD8 = __rdtsc();
    if ( 3.4028235e38 == this[653] )
      v3 = 0.1;
    else
      v3 = *(float *)(dword_106B31C8 + 12) - this[653];
    v5 = (double)(int)(v3 / *(float *)(dword_106B31C8 + 28) + 0.5) * *(float *)(dword_106B31C8 + 28);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 647) + 36))(*((_DWORD *)this + 647), LODWORD(v5));
    this[653] = *(float *)(dword_106B31C8 + 12);
    v4 = __rdtsc() - qword_10690DD8;
    result = HIDWORD(v4);
    qword_10690DD8 = v4;
  }
  return result;
}
