void __thiscall sub_102B7300(volatile signed __int32 *this, char a2)
{
  int v3; // edi
  __int16 v4; // ax
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // [esp+20h] [ebp+8h]

  if ( !a2 )
    sub_1023C380(this, (int)"NPC_CombineMine.OpenHooks", 0.0, 0);
  v3 = *((_DWORD *)this + 106);
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 76))(*((_DWORD *)this + 106));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 72))(v3, v4 & 0xFFFD);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 106) + 60))(*((_DWORD *)this + 106), 1);
  }
  v5 = dword_10700AC8;
  v8 = *((_DWORD *)this + 290);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240((void *)this) )
    sub_100BD750(this);
  v6 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v6 && *v6 )
    v7 = *((_DWORD *)this + 275);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  sub_100BE7D0(this, v7, v8, 64.0);
}
