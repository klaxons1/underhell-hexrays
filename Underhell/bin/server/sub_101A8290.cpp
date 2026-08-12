int __thiscall sub_101A8290(_DWORD *this, int a2)
{
  int v3; // eax

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 1
    && (v3 = sub_101679A0((int)"gordon_precriminal"), sub_10167A00(v3) == 1) )
  {
    return 4;
  }
  else
  {
    return sub_100C9AD0(this, a2);
  }
}
