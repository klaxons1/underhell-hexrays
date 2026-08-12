void __thiscall sub_10211920(int this)
{
  float v2; // [esp+8h] [ebp-8h]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 856))(this, 1) )
  {
    sub_10210260((_DWORD *)this);
  }
  else if ( -1.0 == *(float *)(this + 1644) )
  {
    sub_100EC4A0((int *)this, -1.0, 0);
  }
  else
  {
    v2 = *(float *)(this + 1644) + 0.1;
    sub_100D8290((float *)this, v2);
    *(_DWORD *)(this + 4) = sub_10211920;
  }
}
