void __thiscall sub_1032CF60(int this)
{
  int v2; // ecx

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 88))(v2);
  if ( 0.0 != *(float *)(this + 3792) && *(float *)(this + 3792) <= (double)*(float *)(dword_106B31C8 + 12) )
    *(float *)(this + 3788) = 0.0;
}
