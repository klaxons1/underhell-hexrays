volatile signed __int32 *__thiscall sub_101B8390(signed __int32 this, signed __int32 a2)
{
  signed __int32 *v3; // eax

  if ( *(_BYTE *)(this + 32) )
  {
    (*(void (__thiscall **)(signed __int32))(*(_DWORD *)a2 + 8))(a2);
    return (volatile signed __int32 *)(*(int (__thiscall **)(signed __int32))(*(_DWORD *)a2 + 4))(a2);
  }
  else
  {
    v3 = sub_100FE100((_DWORD *)(this + 24));
    if ( v3 || (v3 = (signed __int32 *)sub_10184390(8)) != 0 )
    {
      v3[1] = a2;
      return sub_101B6F40(this, v3);
    }
    else
    {
      return sub_101B6F40(this, 0);
    }
  }
}
