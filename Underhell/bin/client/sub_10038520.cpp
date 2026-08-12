int __thiscall sub_10038520(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // ecx

  result = (*(int (__thiscall **)(_DWORD *))(*this + 428))(this);
  if ( !(_BYTE)result )
  {
    v3 = this[8];
    if ( v3 > 0 )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD *)(this[5] + v4 + 8);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
        v4 += 12;
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
