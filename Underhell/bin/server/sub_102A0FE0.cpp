void __thiscall sub_102A0FE0(void *this)
{
  int v2; // eax
  int v3; // eax
  int (__thiscall *v4)(void *); // edx
  int v5; // eax
  int v6; // eax

  nullsub_4();
  if ( !*((_DWORD *)this + 4) )
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
    v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100006);
    if ( sub_10023D10(*((_DWORD **)this + 1), v3) )
    {
      v4 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 52);
      *((_DWORD *)this + 26) = 0;
      v5 = v4(this);
      v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100006);
      sub_10023E00(*((char **)this + 1), v6);
      sub_10081C10(*(_DWORD *)(*((_DWORD *)this + 1) + 2588));
      *((_BYTE *)this + 100) = 0;
      *((_DWORD *)this + 17) = -1;
      sub_10044510(*((_DWORD *)this + 1), (int)"Passenger enter canceled");
    }
  }
}
