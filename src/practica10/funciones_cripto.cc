
#include "funciones_cripto.h"
std::string Cesar(const std::string frase, int desplazamiento)
{
	std::string clave{"abcdefzhiklmnopqrstvxABCDEFZHIKLMNOPQRSTVX"};
	auto busca_posicion = [&clave](const std::string::value_type &c)
	{
		auto posicion = clave.find(c);
		return posicion == std::string::npos ? 0 : posicion;
	};

	std::string result;
	std::transform(frase.begin(), frase.end(), std::back_inserter(result),
		[&](const std::string::value_type &c)
		{
			if (auto posicion = busca_posicion(c))
				return clave[((posicion + desplazamiento) + clave.size()) % clave.size()];
			return c;
		});

	return result;
}
