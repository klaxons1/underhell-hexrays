void __thiscall sub_1024DC70(int this, char a2)
{
  double v3; // st7
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx

  v3 = *(float *)(this + 872);
  if ( a2 )
  {
    if ( 1.0 != v3 )
    {
      v4 = *(_DWORD **)(this + 800);
      if ( v4 )
      {
        if ( sub_101ACCC0(v4) )
          *(_DWORD *)(this + 800) = sub_101ACCC0(*(_DWORD **)(this + 800));
      }
      *(float *)(this + 872) = 1.0;
    }
  }
  else if ( -1.0 != v3 )
  {
    v5 = *(_DWORD **)(this + 800);
    if ( v5 && sub_101ACC90(v5) )
      *(_DWORD *)(this + 800) = sub_101ACC90(*(_DWORD **)(this + 800));
    *(float *)(this + 872) = -1.0;
  }
}
