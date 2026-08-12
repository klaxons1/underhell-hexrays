void __thiscall sub_10390A60(int this, int *a2)
{
  int v3; // eax
  int *v4; // eax

  v3 = *a2;
  if ( *a2 == dword_106E9D3C )
  {
    sub_1038ABB0((float *)this);
  }
  else if ( v3 == dword_106E9D44 )
  {
    sub_103895F0((_DWORD *)this);
  }
  else if ( v3 == dword_106E9D40 )
  {
    sub_10389650((_DWORD *)this);
  }
  else if ( v3 == dword_106E9D38 )
  {
    sub_1038F6E0((_DWORD *)this);
  }
  else if ( v3 == dword_106E9D34 )
  {
    *(_BYTE *)(this + 4180) = 1;
    if ( sub_100CF460((_DWORD *)this) )
    {
      v4 = (int *)sub_100CF460((_DWORD *)this);
      sub_10035360(v4, 32);
    }
  }
  else if ( v3 == dword_106E9D30 )
  {
    sub_10390960((_DWORD *)this, (int)a2);
  }
  else
  {
    sub_103329F0((_DWORD *)this, (int)a2);
  }
}
