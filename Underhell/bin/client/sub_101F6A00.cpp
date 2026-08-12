int __thiscall sub_101F6A00(int *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  bool v6; // zf
  void (__stdcall *v7)(int); // eax

  v3 = this[64];
  if ( v3 )
  {
    switch ( a2 )
    {
      case 'O':
      case 'P':
      case 'S':
      case 'T':
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
        v4 = this[262] - 108;
        v5 = *this;
        this[64] = 0;
        if ( v4 )
        {
          v6 = v4 == 1;
          v7 = *(void (__stdcall **)(int))(v5 + 868);
          if ( v6 )
            v7(1);
          else
            v7(0);
        }
        else
        {
          (*(void (__thiscall **)(int *, int))(v5 + 868))(this, 2);
        }
        break;
      default:
        return sub_10236DE0(a2);
    }
  }
  return sub_10236DE0(a2);
}
