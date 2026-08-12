void __thiscall sub_10333E50(void *this, int a2)
{
  const char *v3; // esi

  if ( *(char **)(a2 + 92) == "item_healthkit" || sub_100D6240((_DWORD *)a2, "item_healthkit") )
  {
    if ( !(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 260))(
            this,
            *(float *)(dword_106E24BC + 44),
            0) )
      return;
    goto LABEL_4;
  }
  if ( *(char **)(a2 + 92) == "item_healthvial" || sub_100D6240((_DWORD *)a2, "item_healthvial") )
  {
    if ( (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 260))(
           this,
           *(float *)(dword_106E2504 + 44),
           0) )
    {
LABEL_4:
      sub_100D7330(this);
      sub_1025FAC0(a2);
    }
  }
  else
  {
    v3 = *(const char **)(a2 + 92);
    if ( !v3 )
      v3 = String;
    DevMsg("Citizen doesn't know how to pick up %s!\n", v3);
  }
}
