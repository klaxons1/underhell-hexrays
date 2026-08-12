void __thiscall sub_100ED8D0(_DWORD *this)
{
  int v1; // esi
  int v2; // ebx
  int i; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  void (__thiscall *v7)(int); // edx
  __int16 v9; // [esp+Ch] [ebp-4h] BYREF

  v1 = this[17];
  if ( v1 )
  {
    do
    {
      v2 = *(_DWORD *)(v1 + 6708);
      sub_1007AA40(&v9);
      for ( i = sub_1007AE80(&v9); i; i = sub_1007AE80(&v9) )
      {
        if ( i != -444 )
          sub_100EA770((_DWORD *)(i + 444), v1);
      }
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)off_103DCDDC + 4))(*(unsigned __int16 *)(v1 + 12));
      v4 = *(_DWORD *)(v1 + 6712);
      if ( v4 )
      {
        *(_DWORD *)(v4 + 6708) = *(_DWORD *)(v1 + 6708);
        v5 = *(_DWORD *)(v1 + 6708);
        if ( v5 )
          *(_DWORD *)(v5 + 6712) = *(_DWORD *)(v1 + 6712);
      }
      else if ( this[17] == v1 )
      {
        v6 = *(_DWORD *)(v1 + 6708);
        this[17] = v6;
        if ( v6 )
          *(_DWORD *)(v6 + 6712) = 0;
      }
      v7 = *(void (__thiscall **)(int))(*(_DWORD *)v1 + 28);
      *(_DWORD *)(v1 + 6712) = 0;
      *(_DWORD *)(v1 + 6708) = 0;
      v7(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
