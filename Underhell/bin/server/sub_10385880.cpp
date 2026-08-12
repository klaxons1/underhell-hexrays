void __thiscall sub_10385880(int this)
{
  float *v2; // eax
  double v3; // st7
  float *v4; // eax

  sub_10041D00((_DWORD *)this);
  sub_103844D0(this);
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3828) )
    *(float *)(this + 3796) = 0.75;
  if ( *(_BYTE *)(this + 447) )
  {
    if ( !*(_DWORD *)(this + 3888) )
    {
      v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      sub_10384710(this, v2);
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 264))(this)
      && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3828) > 2.0 )
    {
      v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
      *(_DWORD *)(this + 3888) = *(unsigned __int8 *)(this + 447);
      *(float *)(this + 3828) = v3;
      return;
    }
  }
  else if ( *(_DWORD *)(this + 3888) )
  {
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    sub_10384710(this, v4);
  }
  *(_DWORD *)(this + 3888) = *(unsigned __int8 *)(this + 447);
}
