void __thiscall sub_103CE000(int this, _DWORD *a2)
{
  int v3; // eax

  if ( *a2 == 156 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      sub_10027CD0((_DWORD *)this, 0);
  }
  else if ( *a2 == 158 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
    {
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3844) <= -0.001 )
      {
        v3 = sub_103CDD30();
        sub_10043E90((int *)this, v3);
      }
      else
      {
        sub_10027CD0((_DWORD *)this, 0);
        sub_10050BA0((float *)(this + 3856), -1.0);
      }
    }
  }
  else if ( *a2 != 159 )
  {
    sub_1032CFB0((int *)this, a2);
  }
}
