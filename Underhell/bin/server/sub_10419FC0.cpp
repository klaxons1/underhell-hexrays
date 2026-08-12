int __thiscall sub_10419FC0(int this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // edi

  for ( result = *(_DWORD *)(this + 280); result > 0; result = *(_DWORD *)(this + 280) )
  {
    v3 = **(void (__thiscall *****)(_DWORD, int))(this + 268);
    if ( v3 )
    {
      if ( *(_DWORD *)(this + 280) - 1 > 0 )
        memcpy(*(void **)(this + 268), (const void *)(*(_DWORD *)(this + 268) + 4), 4 * (*(_DWORD *)(this + 280) - 1));
      --*(_DWORD *)(this + 280);
      (**v3)(v3, 1);
    }
  }
  return result;
}
