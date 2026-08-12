void __thiscall sub_10350840(int this)
{
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2276))(this) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      if ( !sub_10023D10((_DWORD *)this, 10) && *(float *)(this + 4152) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_CombineGunship.SearchPing", 0.0, 0);
        *(float *)(this + 4152) = *(float *)(dword_106B31C8 + 12) + 3.0;
      }
    }
    else if ( *(float *)(this + 4152) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_CombineGunship.PatrolPing", 0.0, 0);
      *(float *)(this + 4152) = *(float *)(dword_106B31C8 + 12) + 3.0;
    }
  }
}
