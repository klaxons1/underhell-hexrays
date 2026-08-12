void __thiscall sub_1011ECC0(_BYTE *this)
{
  int v1; // eax
  _DWORD v2[17]; // [esp+4h] [ebp-44h] BYREF

  if ( this[12] )
  {
    if ( dword_10439968 )
    {
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 48))(dword_10439968);
      sub_1011DD50(v2, v1);
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_104376B8 + 24))(dword_104376B8, v2);
      CThreadMutex::Lock((CThreadMutex *)&unk_104376EC);
      sub_1011E010();
      CThreadMutex::Unlock((CThreadMutex *)&unk_104376EC);
    }
  }
}
