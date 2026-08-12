char __thiscall sub_1005D2C0(int this, char a2)
{
  void (__stdcall *v3)(int); // edx
  char result; // al

  if ( a2 != *(_BYTE *)(this + 45) )
  {
    v3 = *(void (__stdcall **)(int))(**(_DWORD **)(this + 4) + 1644);
    if ( a2 )
    {
      v3(1000);
      *(_BYTE *)(this + 45) = a2;
    }
    else
    {
      v3(1001);
      *(_BYTE *)(this + 45) = 0;
    }
    return sub_1004BA00((int *)this, 0);
  }
  return result;
}
